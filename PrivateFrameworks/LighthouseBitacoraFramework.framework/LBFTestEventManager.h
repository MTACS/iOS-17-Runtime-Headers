
@interface LBFTestEventManager : NSObject {
    NSString * _datasetName;
    NSDateFormatter * _dateFormatter;
    NSDictionary * _eventStore;
    NSString * _readCategory;
    NSDictionary * _syntheticData;
}

@property (nonatomic, readonly) NSString *datasetName;
@property (nonatomic, readonly) NSDateFormatter *dateFormatter;
@property (nonatomic, readonly) NSDictionary *eventStore;
@property (nonatomic, readonly) NSString *readCategory;
@property (nonatomic, retain) NSDictionary *syntheticData;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)datasetName;
- (id)dateFormatter;
- (id)dprivacydEventFromDict:(id)arg1;
- (id)ensureBiomeManagerDprivacyd;
- (id)ensureBiomeManagerLighthouse;
- (id)ensureBiomeManagerMLRuntimed;
- (id)ensureBiomeManagerTrial;
- (id)eventStore;
- (bool)generateEventStore;
- (id)generateOutcomeDict;
- (id)init;
- (id)lighthouseEventFromDict:(id)arg1;
- (bool)loadSyntheticData:(id)arg1;
- (bool)loadSyntheticJSON:(id)arg1 datasetName:(id)arg2;
- (id)mlRuntimedEventFromDict:(id)arg1;
- (id)readCategory;
- (id)readData:(id)arg1 endDate:(id)arg2;
- (void)setSyntheticData:(id)arg1;
- (id)syntheticData;
- (id)trialEventFromDict:(id)arg1;
- (id)trialIdentifiersFromJSON:(id)arg1;
- (bool)validateOutcomes:(id)arg1 withAggregatedStates:(id)arg2;

@end
