
@interface FCPuzzleTypeSettingsEntry : NSObject {
    NSString * _identifier;
    NSArray * _lastSeenPuzzleIDs;
    NSString * _puzzleTypeID;
    NSData * _settingsData;
}

@property (nonatomic, readonly) CKRecord *asCKRecord;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *lastSeenPuzzleIDs;
@property (nonatomic, readonly, copy) NSString *puzzleTypeID;
@property (nonatomic, readonly, copy) NSData *settingsData;

- (void).cxx_destruct;
- (id)asCKRecord;
- (id)identifier;
- (id)initWithEntryID:(id)arg1 puzzleTypeID:(id)arg2 settingsData:(id)arg3 lastSeenPuzzleIDs:(id)arg4;
- (id)lastSeenPuzzleIDs;
- (id)puzzleTypeID;
- (id)settingsData;

@end
