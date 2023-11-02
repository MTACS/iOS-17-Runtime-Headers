
@interface HDAutoBugCaptureReporter : NSObject {
    HDDaemon * _daemon;
    id /* block */  _unitTesting_didReportHandler;
}

@property (nonatomic, readonly) HDDaemon *daemon;
@property (nonatomic, copy) id /* block */ unitTesting_didReportHandler;

+ (void)reportNotFinalSeriesSampleWithClass:(Class)arg1 count:(long long)arg2 datumCount:(long long)arg3 reason:(id)arg4;

- (void).cxx_destruct;
- (id)daemon;
- (id)initWithDaemon:(id)arg1;
- (void)reportApplyDataFailure:(Class)arg1 duringSyncFromStore:(id)arg2 error:(id)arg3;
- (void)reportCorruptionForDatabase:(id)arg1 resultCode:(int)arg2;
- (void)reportDataCollectionSeriesProblem:(id)arg1 quantityType:(id)arg2;
- (void)reportDatabaseMigrationFailureWithContext:(id)arg1;
- (void)reportJournalFailureWithErrorDescription:(id)arg1 provenance:(id)arg2 error:(id)arg3;
- (void)reportMissingSource:(id)arg1 duringSyncFromStore:(id)arg2;
- (void)reportQueryDurationWithServer:(id)arg1 dataCount:(long long)arg2 duration:(double)arg3;
- (void)reportSummarySharingInvitationFailureForOperation:(id)arg1 error:(id)arg2;
- (void)setUnitTesting_didReportHandler:(id /* block */)arg1;
- (id /* block */)unitTesting_didReportHandler;

@end
