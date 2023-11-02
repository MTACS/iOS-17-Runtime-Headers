
@interface FCPuzzleHistoryItem : NSObject {
    NSDate * _completedDate;
    NSString * _identifier;
    NSDate * _lastPlayedDate;
    long long  _playDuration;
    NSData * _progressData;
    long long  _progressLevel;
    NSString * _puzzleID;
    NSString * _puzzleTypeID;
}

@property (nonatomic, readonly) CKRecord *asCKRecord;
@property (nonatomic, readonly) NSDate *completedDate;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSDate *lastPlayedDate;
@property (nonatomic, readonly) long long playDuration;
@property (nonatomic, readonly) NSData *progressData;
@property (nonatomic, readonly) long long progressLevel;
@property (nonatomic, readonly, copy) NSString *puzzleID;
@property (nonatomic, readonly, copy) NSString *puzzleTypeID;

- (void).cxx_destruct;
- (id)asCKRecord;
- (id)completedDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)initWithEntryID:(id)arg1 puzzleID:(id)arg2 puzzleTypeID:(id)arg3 progressData:(id)arg4 progressLevel:(long long)arg5 playDuration:(long long)arg6 lastPlayedDate:(id)arg7 completedDate:(id)arg8;
- (id)lastPlayedDate;
- (long long)playDuration;
- (id)progressData;
- (long long)progressLevel;
- (id)puzzleID;
- (id)puzzleTypeID;

@end
