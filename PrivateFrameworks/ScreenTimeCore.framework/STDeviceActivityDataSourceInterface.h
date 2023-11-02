
@interface STDeviceActivityDataSourceInterface : NSObject

+ (id)deviceIdentifierByCoreDuetIdentifier;
+ (id)deviceIdentifiersByUserAltDSID;
+ (void)setGenesisDate:(id)arg1;
+ (void)weeklyNotificationPayloadUsingCoreDuetIdentifiers:(id)arg1 userAltDSID:(id)arg2 completionHandler:(id /* block */)arg3;

@end
