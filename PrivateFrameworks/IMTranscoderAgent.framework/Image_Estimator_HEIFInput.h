
@interface Image_Estimator_HEIFInput : NSObject <MLFeatureProvider> {
    double  _Aspect_Ratio;
    double  _Compression_Ratio;
    double  _Exponential_Entropy;
    double  _Input_Entropy;
    double  _Input_File_Size;
    double  _Input_H_x_W__NumOfPixels_;
    double  _Input_Height;
    double  _Input_log_NumOfPixels_;
    double  _Ratio_of_NumOfPixels;
    double  _Target_File_Size;
    double  _Target_Height;
    double  _Target_Max_Dimension;
    double  _Target_Width;
}

@property (nonatomic) double Aspect_Ratio;
@property (nonatomic) double Compression_Ratio;
@property (nonatomic) double Exponential_Entropy;
@property (nonatomic) double Input_Entropy;
@property (nonatomic) double Input_File_Size;
@property (nonatomic) double Input_H_x_W__NumOfPixels_;
@property (nonatomic) double Input_Height;
@property (nonatomic) double Input_log_NumOfPixels_;
@property (nonatomic) double Ratio_of_NumOfPixels;
@property (nonatomic) double Target_File_Size;
@property (nonatomic) double Target_Height;
@property (nonatomic) double Target_Max_Dimension;
@property (nonatomic) double Target_Width;
@property (nonatomic, readonly) NSSet *featureNames;

- (double)Aspect_Ratio;
- (double)Compression_Ratio;
- (double)Exponential_Entropy;
- (double)Input_Entropy;
- (double)Input_File_Size;
- (double)Input_H_x_W__NumOfPixels_;
- (double)Input_Height;
- (double)Input_log_NumOfPixels_;
- (double)Ratio_of_NumOfPixels;
- (double)Target_File_Size;
- (double)Target_Height;
- (double)Target_Max_Dimension;
- (double)Target_Width;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithInput_File_Size:(double)arg1 Input_Height:(double)arg2 Input_Entropy:(double)arg3 Aspect_Ratio:(double)arg4 Target_File_Size:(double)arg5 Target_Max_Dimension:(double)arg6 Compression_Ratio:(double)arg7 Input_H_x_W__NumOfPixels_:(double)arg8 Target_Height:(double)arg9 Target_Width:(double)arg10 Input_log_NumOfPixels_:(double)arg11 Ratio_of_NumOfPixels:(double)arg12 Exponential_Entropy:(double)arg13;
- (void)setAspect_Ratio:(double)arg1;
- (void)setCompression_Ratio:(double)arg1;
- (void)setExponential_Entropy:(double)arg1;
- (void)setInput_Entropy:(double)arg1;
- (void)setInput_File_Size:(double)arg1;
- (void)setInput_H_x_W__NumOfPixels_:(double)arg1;
- (void)setInput_Height:(double)arg1;
- (void)setInput_log_NumOfPixels_:(double)arg1;
- (void)setRatio_of_NumOfPixels:(double)arg1;
- (void)setTarget_File_Size:(double)arg1;
- (void)setTarget_Height:(double)arg1;
- (void)setTarget_Max_Dimension:(double)arg1;
- (void)setTarget_Width:(double)arg1;

@end
