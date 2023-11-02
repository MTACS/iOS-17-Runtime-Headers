
@interface SXColumnCalculator : NSObject <SXColumnCalculator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)columnLayoutWithConstrainedViewportSize:(struct CGSize { double x1; double x2; })arg1 scaledConstrainedViewportSize:(struct CGSize { double x1; double x2; })arg2 viewportSize:(struct CGSize { double x1; double x2; })arg3 documentLayout:(id)arg4 contentScaleFactor:(double)arg5;
- (id)columnLayoutWithConstrainedViewportSize:(struct CGSize { double x1; double x2; })arg1 viewportSize:(struct CGSize { double x1; double x2; })arg2 documentLayout:(id)arg3;
- (id)columnLayoutWithViewportSize:(struct CGSize { double x1; double x2; })arg1 constrainedToWidth:(double)arg2 documentLayout:(id)arg3 contentScaleFactor:(double)arg4;

@end
