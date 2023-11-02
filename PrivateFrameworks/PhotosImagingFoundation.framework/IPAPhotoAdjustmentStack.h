
@interface IPAPhotoAdjustmentStack : IPAAdjustmentStack {
    struct PFIntSize_st { 
        unsigned long long width; 
        unsigned long long height; 
    }  _inputSize;
    long long  _orientation;
    IPAPhotoAdjustmentPipeline * _pipeline;
}

@property (nonatomic) struct PFIntSize_st { unsigned long long x1; unsigned long long x2; } inputSize;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) IPAPhotoAdjustmentPipeline *pipeline;

- (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct PFIntSize_st { unsigned long long x1; unsigned long long x2; })inputSize;
- (id)maskUUIDs;
- (id)minimumVersionForFormat:(id)arg1;
- (long long)orientation;
- (id)pipeline;
- (void)setInputSize:(struct PFIntSize_st { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPipeline:(id)arg1;

@end
