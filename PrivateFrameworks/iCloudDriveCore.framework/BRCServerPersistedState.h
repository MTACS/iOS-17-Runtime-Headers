
@interface BRCServerPersistedState : NSObject <NSCopying, NSSecureCoding, PQLBindable> {
    NSDate * _lastSyncDownDate;
    unsigned long long  _minLastUsedTime;
    long long  _nextRank;
    NSMutableDictionary * _pendingMigrations;
    BRCServerChangeState * _sharedDatabaseChangeState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastSyncDownDate;
@property (nonatomic) unsigned long long minLastUsedTime;
@property (nonatomic) long long nextRank;
@property (retain) BRCServerChangeState *sharedDatabaseChangeState;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dumpMigrationQueriesForMangledID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1;
- (void)initiateMigrationQueryForMangledIDs:(id)arg1 key:(id)arg2;
- (id)lastSyncDownDate;
- (bool)mangledIDIsPendingMigration:(id)arg1;
- (void)migrationQueryForMangledID:(id)arg1 key:(id)arg2 didUpdateWithCursor:(id)arg3;
- (id)migrationQueryKeyForMangledID:(id)arg1 continuationCursor:(id*)arg2;
- (unsigned long long)minLastUsedTime;
- (long long)nextRank;
- (void)saveToDB:(id)arg1;
- (void)setLastSyncDownDate:(id)arg1;
- (void)setMinLastUsedTime:(unsigned long long)arg1;
- (void)setNextRank:(long long)arg1;
- (void)setSharedDatabaseChangeState:(id)arg1;
- (id)sharedDatabaseChangeState;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
