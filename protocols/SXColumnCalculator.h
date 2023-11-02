
@protocol SXColumnCalculator <NSObject>

@required

- (SXColumnLayout *)columnLayoutWithConstrainedViewportSize:(struct CGSize { double x1; double x2; })arg1 viewportSize:(struct CGSize { double x1; double x2; })arg2 documentLayout:(id <SXDocumentLayout>)arg3;
- (SXColumnLayout *)columnLayoutWithViewportSize:(struct CGSize { double x1; double x2; })arg1 constrainedToWidth:(double)arg2 documentLayout:(id <SXDocumentLayout>)arg3 contentScaleFactor:(double)arg4;

@end
