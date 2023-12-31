
@protocol SiriUITemplatedView <NSObject>

@required

- (void)addTemplateSubview:(UIView<SiriUITemplateView> *)arg1;
- (void)templateSubviewWantsToBeRemovedFromHierarchy:(UIView<SiriUITemplateView> *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })templatedContentMargins;

@end
