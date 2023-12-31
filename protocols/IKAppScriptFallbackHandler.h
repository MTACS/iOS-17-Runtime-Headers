
@protocol IKAppScriptFallbackHandler <NSObject>

@required

- (bool)canFallbackForError:(NSError *)arg1;
- (NSString *)retrieveScript:(id*)arg1;
- (void)scriptEvaluated:(NSString *)arg1;

@end
