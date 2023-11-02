
@interface SGHistorySharedData : NSObject {
    NSData * cachedSalt;
    NSData * cachedSaltLegacyManatee;
    NSMutableSet * confirmedEventFieldHashes;
    NSMutableSet * confirmedEventHashes;
    NSMutableSet * confirmedEventWithoutTimestampFieldHashes;
    NSMutableSet * confirmedEventWithoutTimestampHashes;
    NSMutableSet * confirmedReminderHashes;
    NSMutableSet * contactHashes;
    NSMutableSet * dontUpdate;
    bool  isMigrating;
    NSDate * lastMigrationAttempt;
    NSUbiquitousKeyValueStore * migrateFromStore;
    NSMutableArray * observers;
    NSMutableSet * rejectedEventHashes;
    NSMutableSet * rejectedReminderHashes;
    NSArray * resetInfo;
    NSMutableSet * storageDetailHashes;
}

- (void).cxx_destruct;

@end
