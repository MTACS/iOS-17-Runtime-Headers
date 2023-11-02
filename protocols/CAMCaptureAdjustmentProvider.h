
@protocol CAMCaptureAdjustmentProvider <NSObject>

@required

- (long long)aspectRatioCrop;
- (long long)effectFilterType;
- (bool)hasAdjustments;
- (long long)lightingEffectType;

@end
