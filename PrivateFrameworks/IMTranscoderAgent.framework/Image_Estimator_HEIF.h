
@interface Image_Estimator_HEIF : NSObject {
    MLModel * _model;
}

@property (nonatomic, readonly) MLModel *model;

+ (id)URLOfModelInThisBundle;
+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithMLModel:(id)arg1;
- (id)model;
- (void)predictionFromFeatures:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionFromInput_File_Size:(double)arg1 Input_Height:(double)arg2 Input_Entropy:(double)arg3 Aspect_Ratio:(double)arg4 Target_File_Size:(double)arg5 Target_Max_Dimension:(double)arg6 Compression_Ratio:(double)arg7 Input_H_x_W__NumOfPixels_:(double)arg8 Target_Height:(double)arg9 Target_Width:(double)arg10 Input_log_NumOfPixels_:(double)arg11 Ratio_of_NumOfPixels:(double)arg12 Exponential_Entropy:(double)arg13 error:(id*)arg14;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
