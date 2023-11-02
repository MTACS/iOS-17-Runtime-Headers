
@interface EDAMPushNotificationCredentials : FATObject {
    NSString * _gcmRegistrationId;
    NSData * _iosDeviceToken;
}

@property (nonatomic, retain) NSString *gcmRegistrationId;
@property (nonatomic, retain) NSData *iosDeviceToken;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)gcmRegistrationId;
- (id)iosDeviceToken;
- (void)setGcmRegistrationId:(id)arg1;
- (void)setIosDeviceToken:(id)arg1;

@end
