
@protocol HMDAppleMediaAccessoriesStateMessengerDelegate <NSObject>

@required

- (void)appleMediaAccessoriesStateMessenger:(HMDAppleMediaAccessoriesStateMessenger *)arg1 didReceiveModelIdentifierRequestMessage:(HMFMessage *)arg2 withAccessoryIdentifier:(NSString *)arg3;

@end
