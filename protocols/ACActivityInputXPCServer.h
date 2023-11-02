
@protocol ACActivityInputXPCServer <ACActivityAutomationInputXPCServer>

@required

- (void)endActivityWithIdentifier:(NSString *)arg1 payload:(NSData *)arg2 options:(NSData *)arg3;
- (NSData *)requestActivityWithRequest:(NSData *)arg1 error:(out id*)arg2;
- (void)updateActivityWithIdentifier:(NSString *)arg1 payload:(NSData *)arg2;

@end
