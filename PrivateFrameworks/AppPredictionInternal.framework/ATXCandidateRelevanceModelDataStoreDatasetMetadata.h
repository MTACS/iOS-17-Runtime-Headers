
@interface ATXCandidateRelevanceModelDataStoreDatasetMetadata : NSObject {
    NSDate * _endDate;
    unsigned long long  _numberOfDaysWithPositiveSamples;
    unsigned long long  _numberOfDaysWithSamples;
    unsigned long long  _numberOfPositiveSamples;
    unsigned long long  _numberOfSamples;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long numberOfDaysWithPositiveSamples;
@property (nonatomic, readonly) unsigned long long numberOfDaysWithSamples;
@property (nonatomic, readonly) unsigned long long numberOfPositiveSamples;
@property (nonatomic, readonly) unsigned long long numberOfSamples;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)datasetMetadataForDataPoints:(id)arg1;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)endDate;
- (id)initWithNumberOfPositiveSamples:(unsigned long long)arg1 numberOfSamples:(unsigned long long)arg2 numberOfDaysWithPositiveSamples:(unsigned long long)arg3 numberOfDaysWithSamples:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXCandidateRelevanceModelDataStoreDatasetMetadata:(id)arg1;
- (unsigned long long)numberOfDaysWithPositiveSamples;
- (unsigned long long)numberOfDaysWithSamples;
- (unsigned long long)numberOfPositiveSamples;
- (unsigned long long)numberOfSamples;
- (id)startDate;

@end
