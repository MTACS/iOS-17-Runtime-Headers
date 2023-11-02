
@interface EDAMRegisterForSyncPushNotificationsResult : FATObject {
    NSData * _sharedSecret;
}

@property (nonatomic, retain) NSData *sharedSecret;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (void)setSharedSecret:(id)arg1;
- (id)sharedSecret;

@end
