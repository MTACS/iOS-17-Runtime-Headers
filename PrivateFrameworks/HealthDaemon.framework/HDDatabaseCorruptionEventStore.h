
@interface HDDatabaseCorruptionEventStore : NSObject {
    <HDDatabaseCorruptionEventStoreDelegate> * _delegate;
}

@property (nonatomic) <HDDatabaseCorruptionEventStoreDelegate> *delegate;

+ (id)TTREventKeyForProfileIdentifier:(id)arg1 component:(long long)arg2;
+ (id)corruptionEventKeyForProfileIdentifier:(id)arg1 component:(long long)arg2;
+ (id)outOfSpaceEventKey;

- (void).cxx_destruct;
- (id)dateOfMostRecentDeviceOutOfSpaceEvent;
- (id)dateOfMostRecentObliteration:(id*)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)mostRecentCorruptionEventForProfileIdentifier:(id)arg1 component:(long long)arg2;
- (id)mostRecentMigrationFailureEventForProfile:(id)arg1 component:(long long)arg2 schemaVersion:(long long*)arg3;
- (id)mostRecentTTRAttemptForProfileIdentifier:(id)arg1 component:(long long)arg2;
- (void)persistCorruptionEvent:(id)arg1;
- (void)persistDeviceOutOfSpaceEvent;
- (void)persistMigrationFailureEventForProfile:(id)arg1 component:(long long)arg2 schemaVersion:(long long)arg3;
- (void)persistObliterationForReason:(id)arg1;
- (void)persistTTRAttempt:(id)arg1 forProfileIdentifier:(id)arg2 component:(long long)arg3;
- (void)setDelegate:(id)arg1;

@end
