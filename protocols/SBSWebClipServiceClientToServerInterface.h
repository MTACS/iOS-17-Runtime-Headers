
@protocol SBSWebClipServiceClientToServerInterface <NSObject>

@required

- (void)launchWebClipWithIdentifier:(NSString *)arg1 origin:(NSNumber *)arg2;
- (void)updateWebClipPropertiesWithIdentifier:(NSString *)arg1;

@end
