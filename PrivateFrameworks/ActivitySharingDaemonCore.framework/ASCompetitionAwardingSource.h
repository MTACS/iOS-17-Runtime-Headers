
@interface ASCompetitionAwardingSource : NSObject <ACHEarnedInstanceAwarding> {
    unsigned char  _creatorDevice;
    <ASCompetitionAwardingSourceDataProvider> * _dataProvider;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) <ASCompetitionAwardingSourceDataProvider> *dataProvider;
@property (nonatomic, retain) NSDictionary *dataStoreProperties;
@property (nonatomic, readonly) NSArray *dataStorePropertyKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (id)_allCompetitionsOrderedByEndDate;
- (id)_queue_earnedInstancesForInterval:(id)arg1 selectingCompetitionsUsingFilter:(id /* block */)arg2;
- (id)dataProvider;
- (id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2;
- (id)earnedInstancesForIncrementalInterval:(id)arg1;
- (id)initForCreatorDevice:(unsigned char)arg1;
- (void)setDataProvider:(id)arg1;
- (id)uniqueName;

@end
