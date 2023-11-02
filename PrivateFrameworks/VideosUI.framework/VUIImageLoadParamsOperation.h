
@interface VUIImageLoadParamsOperation : VUIAsynchronousOperation <VUIImageLoadingOperation> {
    bool  _cropToFit;
    NSError * _error;
    TVImage * _image;
    <VUIImageLoadParams> * _params;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaleToSize;
    unsigned long long  _scalingResult;
}

@property (nonatomic) bool cropToFit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TVImage *image;
@property (nonatomic, retain) <VUIImageLoadParams> *params;
@property (nonatomic) struct CGSize { double x1; double x2; } scaleToSize;
@property (nonatomic) unsigned long long scalingResult;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)cropToFit;
- (id)error;
- (id)image;
- (id)init;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3;
- (id)params;
- (struct CGSize { double x1; double x2; })scaleToSize;
- (unsigned long long)scalingResult;
- (void)setCropToFit:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setParams:(id)arg1;
- (void)setScaleToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScalingResult:(unsigned long long)arg1;

@end
