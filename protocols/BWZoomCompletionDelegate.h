
@protocol BWZoomCompletionDelegate <NSObject>

@required

- (void)zoomCommandHandler:(BWZoomCommandHandler *)arg1 didApplyZoomFactor:(float)arg2 zoomFactorWithoutFudge:(float)arg3 rampComplete:(bool)arg4 rampCommandID:(int)arg5;

@end
