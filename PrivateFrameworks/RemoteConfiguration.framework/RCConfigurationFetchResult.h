
@interface RCConfigurationFetchResult : NSObject {
    NSDictionary * _configurationDataByRequestKey;
    NSError * _error;
    NSArray * _segmentSetIDs;
    NSString * _taskIdentifier;
    NSArray * _treatmentIDs;
}

@property (nonatomic, retain) NSDictionary *configurationDataByRequestKey;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSArray *segmentSetIDs;
@property (nonatomic, retain) NSString *taskIdentifier;
@property (nonatomic, retain) NSArray *treatmentIDs;

- (void).cxx_destruct;
- (id)configurationDataByRequestKey;
- (id)error;
- (id)initWithTaskIdentifier:(id)arg1 configurationDataByRequestKey:(id)arg2 treatmentIDs:(id)arg3 segmentSetIDs:(id)arg4 error:(id)arg5;
- (id)segmentSetIDs;
- (void)setConfigurationDataByRequestKey:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSegmentSetIDs:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (void)setTreatmentIDs:(id)arg1;
- (id)taskIdentifier;
- (id)treatmentIDs;

@end
