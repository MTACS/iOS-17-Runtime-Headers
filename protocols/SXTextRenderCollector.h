
@protocol SXTextRenderCollector

@required

- (void)addTextStorage:(SXTextTangierStorage *)arg1 withLayout:(SXTextTangierTextLayout *)arg2 forNamedFlow:(NSString *)arg3 directLayerHostView:(UIView<TSDRepDirectLayerHosting> *)arg4 selectable:(bool)arg5 componentIdentifier:(NSString *)arg6;

@end
