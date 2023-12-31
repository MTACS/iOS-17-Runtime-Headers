
@interface AVTCoreDataChangeTrackerChange : NSObject <AVTAvatarRecordChange> {
    long long  _changeType;
    NSString * _recordIdentifier;
}

@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) NSString *recordIdentifier;

+ (long long)trackerChangeTypeFromPersistentChangeType:(long long)arg1;

- (void).cxx_destruct;
- (long long)changeType;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRecordIdentifier:(id)arg1 changeType:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)recordIdentifier;

@end
