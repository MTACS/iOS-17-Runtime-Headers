
@protocol SCNShadable <NSObject>

@optional

- (void)handleBindingOfSymbol:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 10: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, unsigned int, SCNNode *, SCNRenderer *, void*
- (void)handleUnbindingOfSymbol:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 10: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, unsigned int, SCNNode *, SCNRenderer *, void*
- (NSNumber *)minimumLanguageVersion;
- (SCNProgram *)program;
- (void)setMinimumLanguageVersion:(NSNumber *)arg1;
- (void)setProgram:(SCNProgram *)arg1;
- (void)setShaderModifiers:(NSDictionary *)arg1;
- (NSDictionary *)shaderModifiers;

@end
