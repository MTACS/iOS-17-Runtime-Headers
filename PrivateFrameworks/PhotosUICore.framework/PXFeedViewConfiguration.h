
@interface PXFeedViewConfiguration : NSObject <NSCopying> {
    UIViewController * _containerViewController;
    PXExtendedTraitCollection * _extendedTraitCollection;
    PXFeedConfiguration * _feedConfiguration;
}

@property (nonatomic) UIViewController *containerViewController;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, readonly) PXFeedConfiguration *feedConfiguration;

- (void).cxx_destruct;
- (id)containerViewController;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)extendedTraitCollection;
- (id)feedConfiguration;
- (id)init;
- (id)initWithFeedConfiguration:(id)arg1 extendedTraitCollection:(id)arg2;
- (void)setContainerViewController:(id)arg1;

@end
