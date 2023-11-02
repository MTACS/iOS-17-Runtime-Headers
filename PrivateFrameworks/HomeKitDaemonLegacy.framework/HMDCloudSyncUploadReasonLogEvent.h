
@interface HMDCloudSyncUploadReasonLogEvent : HMMLogEvent {
    long long  _homeManagerPushCount;
    long long  _homeZonePushCount;
    long long  _legacyPushCount;
    NSString * _saveReason;
}

@property (readonly) long long homeManagerPushCount;
@property (readonly) long long homeZonePushCount;
@property (readonly) long long legacyPushCount;
@property (nonatomic, readonly) NSString *saveReason;

+ (id)uploadReason:(id)arg1 acceptedHomeManagerZonePush:(bool)arg2;
+ (id)uploadReason:(id)arg1 acceptedHomeZonePush:(bool)arg2;
+ (id)uploadReason:(id)arg1 acceptedLegacyPush:(bool)arg2;

- (void).cxx_destruct;
- (long long)homeManagerPushCount;
- (long long)homeZonePushCount;
- (id)initWithUploadReason:(id)arg1 legacyPushCount:(long long)arg2 homeZonePushCount:(long long)arg3 homeManagerPushCount:(long long)arg4;
- (long long)legacyPushCount;
- (id)saveReason;

@end
