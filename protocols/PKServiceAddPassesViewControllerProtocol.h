
@protocol PKServiceAddPassesViewControllerProtocol <NSObject>

@required

- (void)evaluateBrightness;
- (void)ingestPasses:(NSArray *)arg1 orPassesContainer:(PKPassesXPCContainer *)arg2 orIssuerData:(NSData *)arg3 withSignature:(NSData *)arg4 fromPresentationSource:(unsigned long long)arg5;
- (void)resetBrightness;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

@end
