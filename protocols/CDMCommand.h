
@protocol CDMCommand <NSObject>

@required

+ (NSString *)commandName;

- (NSError *)cmdError;
- (NSString *)commandName;
- (void)setCmdError:(NSError *)arg1;
- (NSString *)uuid;

@end
