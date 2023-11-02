
@protocol SBSAccessibilityWindowHostingClientToServerInterface <NSObject>

@required

- (void)registerWindowWithContextID:(NSNumber *)arg1 atLevel:(NSNumber *)arg2;
- (void)unregisterWindowWithContextID:(NSNumber *)arg1;

@end
