
@protocol IKAppContextInspectorDelegate <IKAppContextDelegate>

@optional

- (void)appContext:(IKAppContext *)arg1 didChangeInspectElementMode:(bool)arg2;
- (bool)appContext:(IKAppContext *)arg1 highlightViewForElement:(IKViewElement *)arg2 contentColor:(UIColor *)arg3 paddingColor:(UIColor *)arg4 borderColor:(UIColor *)arg5 marginColor:(UIColor *)arg6;
- (bool)appContext:(IKAppContext *)arg1 highlightViewsForElements:(NSArray *)arg2 contentColor:(UIColor *)arg3 paddingColor:(UIColor *)arg4 borderColor:(UIColor *)arg5 marginColor:(UIColor *)arg6;
- (bool)cancelHighlightViewForAppContext:(IKAppContext *)arg1;

@end
