
@interface WFImageRotateAction : WFAction

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (bool)isProgressIndeterminate;
- (void)rotateImage:(id)arg1 byDegrees:(double)arg2 completion:(id /* block */)arg3;
- (void)rotateMovie:(id)arg1 byDegrees:(double)arg2 completion:(id /* block */)arg3;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end
