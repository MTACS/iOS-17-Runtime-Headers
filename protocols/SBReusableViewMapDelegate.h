
@protocol SBReusableViewMapDelegate <NSObject>

@required

- (<SBRecycledViewsContainerProviding> *)recycledViewsContainerProviderForViewMap:(SBReusableViewMap *)arg1;
- (unsigned long long)viewMap:(SBReusableViewMap *)arg1 maxRecycledViewsOfClass:(Class)arg2;

@optional

- (UIView<SBReusableView> *)viewMap:(SBReusableViewMap *)arg1 makeNewViewOfClass:(Class)arg2;
- (bool)viewMap:(SBReusableViewMap *)arg1 shouldRecycleView:(UIView<SBReusableView> *)arg2;
- (void)viewMap:(SBReusableViewMap *)arg1 willDiscardView:(UIView<SBReusableView> *)arg2;

@end
