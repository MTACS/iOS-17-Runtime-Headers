
@interface PHImageResourceChooserRequestInfo : NSObject {
    NSArray * _allowedResourceVersions;
    <PHResourceChooserAsset> * _asset;
    PHImageRequestBehaviorSpec * _behaviorSpec;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredSize;
    double  _fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
    bool  _isCloudShared;
    NSString * _loggingPrefix;
    float  _requestedScale;
}

@property (nonatomic, readonly) NSArray *allowedResourceVersions;
@property (nonatomic, readonly) <PHResourceChooserAsset> *asset;
@property (nonatomic, readonly) PHImageRequestBehaviorSpec *behaviorSpec;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } desiredSize;
@property (nonatomic, readonly) double fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
@property (nonatomic, readonly) bool isCloudShared;
@property (nonatomic, copy) NSString *loggingPrefix;
@property (nonatomic, readonly) float requestedScale;

- (void).cxx_destruct;
- (id)allowedResourceVersions;
- (id)asset;
- (id)behaviorSpec;
- (struct CGSize { double x1; double x2; })desiredSize;
- (double)fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
- (id)initWithAsset:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 requestedScale:(float)arg3 allowedResourceVersions:(id)arg4 behaviorSpec:(id)arg5 cloudSharedMode:(bool)arg6 fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable:(double)arg7 loggingPrefix:(id)arg8;
- (bool)isCloudShared;
- (id)loggingPrefix;
- (float)requestedScale;
- (void)setLoggingPrefix:(id)arg1;

@end
