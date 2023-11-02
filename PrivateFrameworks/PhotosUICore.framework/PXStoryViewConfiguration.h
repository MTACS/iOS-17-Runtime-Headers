
@interface PXStoryViewConfiguration : NSObject <NSCopying> {
    PXStoryConfiguration * _configuration;
    UIViewController * _containerViewController;
    PXExtendedTraitCollection * _extendedTraitCollection;
}

@property (nonatomic, readonly) PXStoryConfiguration *configuration;
@property (nonatomic) UIViewController *containerViewController;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;

- (void).cxx_destruct;
- (id)configuration;
- (id)containerViewController;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)extendedTraitCollection;
- (id)init;
- (id)initWithConfiguration:(id)arg1 extendedTraitCollection:(id)arg2;
- (void)setContainerViewController:(id)arg1;

@end
