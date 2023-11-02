
@protocol MEMailComposeExtensionHostDelegate <NSObject>

@required

- (void)regenerateEmailAddressTokenChangesForSession:(MEComposeSession *)arg1 forContextUUID:(NSUUID *)arg2;

@end
