
@interface MAAutoAssetInfoControl : NSObject <NSSecureCoding> {
    int  _cacheDeleteUrgency;
    bool  _clearingAfter;
    bool  _forceUnlock;
    NSArray * _limitedToAssetTypes;
    long long  _simulateEnd;
    long long  _simulateOperation;
    long long  _targetingPurgeAmount;
    NSString * _volumeToReclaim;
}

@property (nonatomic, readonly) int cacheDeleteUrgency;
@property (nonatomic, readonly) bool clearingAfter;
@property (nonatomic, readonly) bool forceUnlock;
@property (nonatomic, readonly, retain) NSArray *limitedToAssetTypes;
@property (nonatomic, readonly) long long simulateEnd;
@property (nonatomic, readonly) long long simulateOperation;
@property (nonatomic, readonly) long long targetingPurgeAmount;
@property (nonatomic, readonly, retain) NSString *volumeToReclaim;

+ (id)nameOfSimulateEnd:(long long)arg1;
+ (id)nameOfSimulateOperation:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)cacheDeleteUrgency;
- (bool)clearingAfter;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceUnlock;
- (id)initClearingAfter:(bool)arg1;
- (id)initClearingAfter:(bool)arg1 forcingUnlock:(bool)arg2 limitedToAssetTypes:(id)arg3 withVolumeToReclaim:(id)arg4 withUrgency:(int)arg5 targetingPurgeAmount:(long long)arg6 simulateOperation:(long long)arg7 simulateEnd:(long long)arg8;
- (id)initClearingAfter:(bool)arg1 limitedToAssetTypes:(id)arg2;
- (id)initForSimulateOperation:(long long)arg1 withSimulateEnd:(long long)arg2;
- (id)initForcingUnlock:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVolumeToReclaim:(id)arg1 withUrgency:(int)arg2 targetingPurgeAmount:(long long)arg3;
- (id)limitedToAssetTypes;
- (long long)simulateEnd;
- (long long)simulateOperation;
- (id)summary;
- (long long)targetingPurgeAmount;
- (id)volumeToReclaim;

@end
