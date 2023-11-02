
@protocol MCMActionArgument <NSObject>

@required

- (NSURL *)fileURL;
- (<MCMActionArgument> *)initWithString:(NSString *)arg1;
- (NSString *)string;

@end
