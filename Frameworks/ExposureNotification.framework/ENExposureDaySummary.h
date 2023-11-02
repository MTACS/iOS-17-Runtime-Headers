
@interface ENExposureDaySummary : NSObject <CUXPCCodable> {
    ENExposureSummaryItem * _confirmedClinicalDiagnosisSummary;
    ENExposureSummaryItem * _confirmedTestSummary;
    NSDate * _date;
    ENExposureSummaryItem * _daySummary;
    ENExposureSummaryItem * _recursiveSummary;
    ENExposureSummaryItem * _selfReportedSummary;
}

@property (nonatomic, retain) ENExposureSummaryItem *confirmedClinicalDiagnosisSummary;
@property (nonatomic, retain) ENExposureSummaryItem *confirmedTestSummary;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) ENExposureSummaryItem *daySummary;
@property (nonatomic, retain) ENExposureSummaryItem *recursiveSummary;
@property (nonatomic, retain) ENExposureSummaryItem *selfReportedSummary;

- (void).cxx_destruct;
- (id)confirmedClinicalDiagnosisSummary;
- (id)confirmedTestSummary;
- (id)date;
- (id)daySummary;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (id)recursiveSummary;
- (void)roundDurations;
- (id)selfReportedSummary;
- (void)setConfirmedClinicalDiagnosisSummary:(id)arg1;
- (void)setConfirmedTestSummary:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDaySummary:(id)arg1;
- (void)setRecursiveSummary:(id)arg1;
- (void)setSelfReportedSummary:(id)arg1;

@end
