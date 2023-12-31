
@interface ISPlayerState : NSObject {
    NSString * _diagnosticLabel;
    double  _photoBlurRadius;
    double  _videoAlpha;
    double  _videoBlurRadius;
}

@property (nonatomic, readonly) NSString *diagnosticLabel;
@property (nonatomic, readonly) double photoBlurRadius;
@property (nonatomic, readonly) double videoAlpha;
@property (nonatomic, readonly) double videoBlurRadius;

+ (id)outputInfoWithPhotoBlurRadius:(double)arg1 videoAlpha:(double)arg2 videoBlurRadius:(double)arg3 label:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)diagnosticLabel;
- (id)initWithPhotoBlurRadius:(double)arg1 videoAlpha:(double)arg2 videoBlurRadius:(double)arg3 label:(id)arg4;
- (double)photoBlurRadius;
- (double)videoAlpha;
- (double)videoBlurRadius;

@end
