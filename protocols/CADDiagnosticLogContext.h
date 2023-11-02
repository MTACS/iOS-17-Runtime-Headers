
@protocol CADDiagnosticLogContext <NSObject, CalDiagObfuscationContext>

@required

- (bool)canceled;
- (void)deleteTemporaryFile:(NSURL *)arg1;
- (void)log:(NSString *)arg1;
- (void)logError:(NSString *)arg1;
- (bool)redactLogs;
- (void)setStatus:(unsigned long long)arg1 forFile:(NSURL *)arg2;
- (NSURL *)temporaryFileForName:(NSString *)arg1;

@end
