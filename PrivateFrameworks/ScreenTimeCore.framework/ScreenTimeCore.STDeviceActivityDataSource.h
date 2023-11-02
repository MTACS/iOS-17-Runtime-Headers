
@interface ScreenTimeCore.STDeviceActivityDataSource : NSObject

+ (id)deviceIdentifierByCoreDuetIdentifier;
+ (id)deviceIdentifiersByUserAltDSID;
+ (void)setGenesisDate:(id)arg1;
+ (void)weeklyNotificationPayloadWithCoreDuetIdentifiers:(id)arg1 userAltDSID:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)init;

@end
