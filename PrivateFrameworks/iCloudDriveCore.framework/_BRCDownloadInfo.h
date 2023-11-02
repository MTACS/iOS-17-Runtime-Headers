
@interface _BRCDownloadInfo : _BRCTransferInfo {
    NSMutableDictionary * _resumeUnitCounts;
    long long  previousCompletedUnitCount;
    long long  previousTotalUnitCount;
}

@property (nonatomic) long long previousCompletedUnitCount;
@property (nonatomic) long long previousTotalUnitCount;
@property (nonatomic, readonly) NSMutableDictionary *resumeUnitCounts;

- (void).cxx_destruct;
- (void)copyProgressInfoToProgress:(id)arg1 options:(BOOL)arg2;
- (id)init;
- (long long)previousCompletedUnitCount;
- (long long)previousTotalUnitCount;
- (id)resumeUnitCounts;
- (void)setPreviousCompletedUnitCount:(long long)arg1;
- (void)setPreviousTotalUnitCount:(long long)arg1;
- (void)updateLocalizedDescriptionWithOptions:(BOOL)arg1;

@end
