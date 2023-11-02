
@interface MTMetricsData : MTObject {
    NSArray * _additionalBaseData;
    NSMutableArray * _additionalData;
    NSArray * _additionalEventData;
    bool  _anonymous;
    NSDictionary * _baseFields;
    MTCallerSuppliedFields * _callerSuppliedFields;
    MTPromise * _configBaseFields;
    NSDictionary * _eventSpecificFields;
    NSMutableDictionary * _performanceData;
    NSMutableArray * _postProcessingBlocks;
    NSArray * _registeredEventData;
    bool  _samplingEnabled;
}

@property (nonatomic, retain) NSArray *additionalBaseData;
@property (nonatomic, retain) NSMutableArray *additionalData;
@property (nonatomic, retain) NSArray *additionalEventData;
@property (getter=isAnonymous, setter=setAnonymous:, nonatomic) bool anonymous;
@property (nonatomic, retain) NSDictionary *baseFields;
@property (nonatomic, retain) MTCallerSuppliedFields *callerSuppliedFields;
@property (nonatomic, retain) MTPromise *configBaseFields;
@property (nonatomic, retain) NSDictionary *eventSpecificFields;
@property (nonatomic, retain) NSMutableDictionary *performanceData;
@property (nonatomic, retain) NSMutableArray *postProcessingBlocks;
@property (nonatomic, retain) NSArray *registeredEventData;
@property (nonatomic) bool samplingEnabled;

- (void).cxx_destruct;
- (void)addFields:(id)arg1;
- (void)addFieldsWithDictionary:(id)arg1;
- (void)addFieldsWithPromise:(id)arg1;
- (void)addPostProcessingBlock:(id /* block */)arg1;
- (void)addPostProcessingBlocks:(id)arg1;
- (id)additionalBaseData;
- (id)additionalData;
- (id)additionalEventData;
- (id)baseFields;
- (id)callerSuppliedFields;
- (void)cancelUnfinishedPromisedEventData;
- (id)composeFieldsMaps;
- (id)configBaseFields;
- (id)debugDescription;
- (id)eventSpecificFields;
- (id)getAdditionalData;
- (id)getPostProcessingBlocks;
- (bool)isAnonymous;
- (id)performanceData;
- (id)postProcessingBlocks;
- (id)recordEvent;
- (id)registeredEventData;
- (bool)samplingEnabled;
- (void)setAdditionalBaseData:(id)arg1;
- (void)setAdditionalData:(id)arg1;
- (void)setAdditionalEventData:(id)arg1;
- (void)setAnonymous:(bool)arg1;
- (void)setBaseFields:(id)arg1;
- (void)setCallerSuppliedFields:(id)arg1;
- (void)setConfigBaseFields:(id)arg1;
- (void)setEventSpecificFields:(id)arg1;
- (void)setPerformanceData:(id)arg1;
- (void)setPostProcessingBlocks:(id)arg1;
- (void)setRegisteredEventData:(id)arg1;
- (void)setSamplingEnabled:(bool)arg1;
- (id)toDictionary;
- (id)userAndClientIDFields;

@end
