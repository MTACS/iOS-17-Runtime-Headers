
@interface _BRCTransferInfo : NSObject {
    NSMutableDictionary * _childProgresses;
    NSMutableDictionary * _previousUnitCounts;
    BRCProgress * _progress;
    NSMutableDictionary * _versionSizes;
    long long  sumOfCompletedUnitCountDelta;
    long long  sumOfTotalUnitCountDelta;
}

@property (nonatomic, readonly) NSMutableDictionary *childProgresses;
@property (nonatomic, readonly) NSMutableDictionary *previousUnitCounts;
@property (nonatomic, readonly) BRCProgress *progress;
@property (nonatomic) long long sumOfCompletedUnitCountDelta;
@property (nonatomic) long long sumOfTotalUnitCountDelta;
@property (nonatomic, readonly) NSMutableDictionary *versionSizes;

- (void).cxx_destruct;
- (id)childProgresses;
- (void)copyProgressInfoToProgress:(id)arg1 options:(BOOL)arg2;
- (id)description;
- (id)init;
- (id)previousUnitCounts;
- (id)progress;
- (void)setSumOfCompletedUnitCountDelta:(long long)arg1;
- (void)setSumOfTotalUnitCountDelta:(long long)arg1;
- (long long)sumOfCompletedUnitCountDelta;
- (long long)sumOfTotalUnitCountDelta;
- (void)updateLocalizedDescriptionWithOptions:(BOOL)arg1;
- (void)updateUnitCount;
- (void)verifyFutureProgressIsNotFinished;
- (id)versionSizes;

@end
