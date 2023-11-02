
@interface Predictor : NSObject {
    MLMultiArray * _TeModelInput;
    Te_c3seuakuh8Input * _TeModelInput_c3seuakuh8;
    Te_tjejjxf8q3Input * _TeModelInput_tjejjxf8q3;
    Te_c3seuakuh8Output * _TeModelOutput_c3seuakuh8;
    Te_tjejjxf8q3Output * _TeModelOutput_tjejjxf8q3;
    Te_c3seuakuh8 * _mTe_c3seuakuh8;
    Te_tjejjxf8q3 * _mTe_tjejjxf8q3;
    MLPredictionOptions * _modelOptions;
}

@property (nonatomic, readonly) MLMultiArray *TeModelInput;
@property (nonatomic, readonly) Te_c3seuakuh8Input *TeModelInput_c3seuakuh8;
@property (nonatomic, readonly) Te_tjejjxf8q3Input *TeModelInput_tjejjxf8q3;
@property (nonatomic, readonly) Te_c3seuakuh8Output *TeModelOutput_c3seuakuh8;
@property (nonatomic, readonly) Te_tjejjxf8q3Output *TeModelOutput_tjejjxf8q3;
@property (nonatomic, readonly) Te_c3seuakuh8 *mTe_c3seuakuh8;
@property (nonatomic, readonly) Te_tjejjxf8q3 *mTe_tjejjxf8q3;
@property (nonatomic, readonly) MLPredictionOptions *modelOptions;

- (void).cxx_destruct;
- (id)TeModelInput;
- (id)TeModelInput_c3seuakuh8;
- (id)TeModelInput_tjejjxf8q3;
- (id)TeModelOutput_c3seuakuh8;
- (id)TeModelOutput_tjejjxf8q3;
- (id)init;
- (id)mTe_c3seuakuh8;
- (id)mTe_tjejjxf8q3;
- (id)modelOptions;
- (bool)predict:(void*)arg1 afib:(void*)arg2 be_mode:(bool*)arg3 with_error_status:(bool*)arg4;
- (void)resample:(void*)arg1 output:(void*)arg2;

@end
