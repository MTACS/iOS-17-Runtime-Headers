
@interface PUPickerAdditionalSelectionState : NSObject {
    void observable;
    void registerConfiguration;
}

@property (nonatomic, retain) NSNumber *downscalingTargetDimension;
@property (nonatomic, readonly) PXObservable *observable;
@property (nonatomic, readonly) PXPhotosFileProviderRegisterConfiguration *registerConfiguration;
@property (nonatomic) bool shouldIncludeCaption;
@property (nonatomic) bool shouldIncludeLocation;
@property (nonatomic) long long userEncodingPolicy;

- (void).cxx_destruct;
- (id)downscalingTargetDimension;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)observable;
- (id)registerConfiguration;
- (void)setDownscalingTargetDimension:(id)arg1;
- (void)setShouldIncludeCaption:(bool)arg1;
- (void)setShouldIncludeLocation:(bool)arg1;
- (void)setUserEncodingPolicy:(long long)arg1;
- (bool)shouldIncludeCaption;
- (bool)shouldIncludeLocation;
- (long long)userEncodingPolicy;

@end
