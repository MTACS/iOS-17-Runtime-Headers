
@interface SBIconPageIndicatorImageSetResult : NSObject {
    _UILegibilityImageSet * _enabledPageIndicatorSet;
    _UILegibilityImageSet * _pageIndicatorSet;
}

@property (nonatomic, readonly) _UILegibilityImageSet *enabledPageIndicatorSet;
@property (nonatomic, readonly) _UILegibilityImageSet *pageIndicatorSet;

- (void).cxx_destruct;
- (id)enabledPageIndicatorSet;
- (id)initWithIndicatorSet:(id)arg1 enabledIndicatorSet:(id)arg2;
- (id)pageIndicatorSet;

@end
