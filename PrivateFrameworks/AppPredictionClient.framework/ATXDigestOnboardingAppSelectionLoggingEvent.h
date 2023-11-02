
@interface ATXDigestOnboardingAppSelectionLoggingEvent : NSObject <ATXProtoBufWrapper, BMStoreData> {
    bool  _addedToDigest;
    unsigned long long  _avgNumBasicNotifications;
    unsigned long long  _avgNumMessageNotfications;
    unsigned long long  _avgNumTimeSensitiveNonMessageNotifications;
    NSString * _bundleId;
    unsigned long long  _rank;
    NSUUID * _sessionUUID;
    bool  _wasShownInDigestOnboarding;
}

@property (nonatomic, readonly) bool addedToDigest;
@property (nonatomic, readonly) unsigned long long avgNumBasicNotifications;
@property (nonatomic, readonly) unsigned long long avgNumMessageNotfications;
@property (nonatomic, readonly) unsigned long long avgNumTimeSensitiveNonMessageNotifications;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long rank;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wasShownInDigestOnboarding;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (bool)addedToDigest;
- (unsigned long long)avgNumBasicNotifications;
- (unsigned long long)avgNumMessageNotfications;
- (unsigned long long)avgNumTimeSensitiveNonMessageNotifications;
- (id)bundleId;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 bundleId:(id)arg2 avgNumBasicNotifications:(unsigned long long)arg3 avgNumMessageNotifications:(unsigned long long)arg4 avgNumTimeSensitiveNonMessageNotifications:(unsigned long long)arg5 rank:(unsigned long long)arg6 addedToDigest:(bool)arg7 wasShownInDigestOnboarding:(bool)arg8;
- (id)proto;
- (unsigned long long)rank;
- (id)serialize;
- (id)sessionUUID;
- (bool)wasShownInDigestOnboarding;

@end
