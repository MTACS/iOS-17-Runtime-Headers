
@interface HMDAudioAnalysisEventBulletinNotificationRegistration : HMDBulletinNotificationRegistration <HMDBulletinNotificationRegistrationRemoteCoding, NSCopying, NSSecureCoding> {
    NSUUID * _accessoryUUID;
    unsigned long long  _audioAnalysisClassifierOptions;
}

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly) unsigned long long audioAnalysisClassifierOptions;

+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (unsigned long long)audioAnalysisClassifierOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConditions:(id)arg1 audioAnalysisClassifierOptions:(unsigned long long)arg2 accessoryUUID:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLocalBulletinAudioAnalysisRegistration:(id)arg1;
- (id)initWithPredicate:(id)arg1 accessoryUUID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (id)serializedRegistrationForRemoteMessage;

@end
