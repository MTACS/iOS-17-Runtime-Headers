
@protocol WGWidgetIconAnimationExtraViewsProviding <NSObject>

@required

- (NSArray *)extraViews;
- (NSArray *)extraViewsContainers;
- (bool)shouldAnimateFirstTwoViewsAsOne;
- (bool)shouldAnimateLastTwoViewsAsOne;

@end
