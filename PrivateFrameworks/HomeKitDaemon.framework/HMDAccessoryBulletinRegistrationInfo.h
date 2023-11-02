
@interface HMDAccessoryBulletinRegistrationInfo : NSObject {
    NSUUID * _accessoryUUID;
    bool  _enabled;
    NSPredicate * _predicate;
    long long  _serviceInstanceID;
}

@property (nonatomic, retain) NSUUID *accessoryUUID;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) long long serviceInstanceID;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)description;
- (bool)enabled;
- (id)predicate;
- (long long)serviceInstanceID;
- (void)setAccessoryUUID:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setServiceInstanceID:(long long)arg1;

@end
