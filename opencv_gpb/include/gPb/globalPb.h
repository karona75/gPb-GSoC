#include <iostream>
#include <vector>
#include <math.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

namespace cv
{
void
globalPb(const cv::Mat & image,
         cv::Mat & gPb,
         cv::Mat & gPb_thin,
         std::vector<cv::Mat> & gPb_ori);

void
pb_parts_final_selected(std::vector<cv::Mat> & layers,
                        std::vector<std::vector<cv::Mat> > & gradients);

void
MakeFilter(const int radii,
           const double theta,
           cv::Mat & kernel);

void
multiscalePb(const cv::Mat & image,
             cv::Mat & mPb_max,
             std::vector<std::vector<cv::Mat> > & gradients);
}
