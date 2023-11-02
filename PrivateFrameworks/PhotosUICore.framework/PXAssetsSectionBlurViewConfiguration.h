
@interface PXAssetsSectionBlurViewConfiguration : NSObject <PXGViewUserData> {
    double  _intensity;
    double  _maximumBlurRadius;
    double  _maximumDimmingFraction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double intensity;
@property (nonatomic, readonly) double maximumBlurRadius;
@property (nonatomic, readonly) double maximumDimmingFraction;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithIntensity:(double)arg1 maximumBlurRadius:(double)arg2 maximumDimmingFraction:(double)arg3;
- (double)intensity;
- (double)maximumBlurRadius;
- (double)maximumDimmingFraction;

@end
