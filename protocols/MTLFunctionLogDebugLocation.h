
@protocol MTLFunctionLogDebugLocation <NSObject>

@required

- (NSURL *)URL;
- (unsigned long long)column;
- (NSString *)functionName;
- (unsigned long long)line;

@end
