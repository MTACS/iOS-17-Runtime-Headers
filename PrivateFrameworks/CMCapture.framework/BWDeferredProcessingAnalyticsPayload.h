
@interface BWDeferredProcessingAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    unsigned int  _containerAgeInSeconds;
    int  _containerProcessingCount;
    unsigned long long  _containerSizeInBytes;
    int  _error;
    bool  _fileBacked;
    unsigned int  _graphPrepareDurationInMilliseconds;
    bool  _interactiveQoS;
    unsigned int  _jobDurationInMilliseconds;
    NSString * _processingResult;
    int  _processingType;
}

@property (nonatomic) unsigned int containerAgeInSeconds;
@property (nonatomic) int containerProcessingCount;
@property (nonatomic) unsigned long long containerSizeInBytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int error;
@property (nonatomic) bool fileBacked;
@property (nonatomic) unsigned int graphPrepareDurationInMilliseconds;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interactiveQoS;
@property (nonatomic) unsigned int jobDurationInMilliseconds;
@property (nonatomic, copy) NSString *processingResult;
@property (nonatomic) int processingType;
@property (readonly) Class superclass;

- (unsigned int)containerAgeInSeconds;
- (int)containerProcessingCount;
- (unsigned long long)containerSizeInBytes;
- (void)dealloc;
- (int)error;
- (id)eventDictionary;
- (id)eventName;
- (bool)fileBacked;
- (unsigned int)graphPrepareDurationInMilliseconds;
- (id)init;
- (bool)interactiveQoS;
- (unsigned int)jobDurationInMilliseconds;
- (id)processingResult;
- (int)processingType;
- (void)reset;
- (void)setContainerAgeInSeconds:(unsigned int)arg1;
- (void)setContainerProcessingCount:(int)arg1;
- (void)setContainerSizeInBytes:(unsigned long long)arg1;
- (void)setError:(int)arg1;
- (void)setFileBacked:(bool)arg1;
- (void)setGraphPrepareDurationInMilliseconds:(unsigned int)arg1;
- (void)setInteractiveQoS:(bool)arg1;
- (void)setJobDurationInMilliseconds:(unsigned int)arg1;
- (void)setProcessingResult:(id)arg1;
- (void)setProcessingType:(int)arg1;

@end
