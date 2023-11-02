
@interface PXTitleLegibilityDimmingViewConfiguration : NSObject <PXGViewUserData> {
    NSString * _gradientImageName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *gradientImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)gradientImageName;
- (id)initWithGradientImageName:(id)arg1;
- (void)prepareForRender;

@end
