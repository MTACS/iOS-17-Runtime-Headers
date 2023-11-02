
@protocol CCUIContentModuleContextDelegate <NSObject>

@required

- (void)contentModuleContext:(CCUIContentModuleContext *)arg1 didUpdateHomeGestureDismissalAllowed:(bool)arg2;
- (void)contentModuleContext:(CCUIContentModuleContext *)arg1 enqueueStatusUpdate:(CCUIStatusUpdate *)arg2;
- (CCUISensorActivityData *)contentModuleContext:(CCUIContentModuleContext *)arg1 requestsSensorActivityDataForActiveSensorType:(unsigned long long)arg2;
- (void)dismissControlCenterForContentModuleContext:(CCUIContentModuleContext *)arg1;
- (void)dismissExpandedViewForContentModuleContext:(CCUIContentModuleContext *)arg1;
- (struct CCUIModuleLayoutSize { unsigned long long x1; unsigned long long x2; })moduleLayoutSizeForContentModuleContext:(CCUIContentModuleContext *)arg1 forOrientation:(long long)arg2;
- (void)requestExpandModuleForContentModuleContext:(CCUIContentModuleContext *)arg1;
- (void)requestModuleLayoutSizeUpdateForContentModuleContext:(CCUIContentModuleContext *)arg1;

@end
