
@protocol SBBannerCustomTransitionAnimating <NSObject>

@optional

+ (void)performAnimationsForTransition:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, bool, bool, void*

- (void)performActionsForTransition:(SBBannerCustomTransitionAnimatorContext *)arg1;
- (void)prepareForTransition:(SBBannerCustomTransitionAnimatorContext *)arg1;

@end
