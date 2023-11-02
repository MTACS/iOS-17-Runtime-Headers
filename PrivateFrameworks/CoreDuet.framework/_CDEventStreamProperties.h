
@interface _CDEventStreamProperties : NSObject {
    NSNumber * _dataCollectionEnabledNum;
    NSObject * _dataCollectionObject;
    NSNumber * _domainAvailabilityNum;
    NSNumber * _isAvailableNum;
    NSObject * _platformObject;
    bool  dataCollectionEnabled;
    NSString * descriptionString;
    unsigned long long  domainAvailability;
    long long  eventCountLimit;
    long long  eventsPerPeriod;
    NSString * formattedName;
    bool  isAvailable;
    bool  isHistorical;
    bool  isInstant;
    NSString * knowledgeBaseMetadataClass;
    NSString * knowledgeBaseName;
    NSString * monitorClass;
    NSString * name;
    double  period;
    long long  pollingPeriod;
    bool  setupOnDemand;
    bool  shouldSaveCurrentEventOnShutdown;
    double  temporalPrecision;
    double  timeToLive;
    _DKObjectType * valueType;
}

@property (nonatomic, readonly) bool dataCollectionEnabled;
@property (nonatomic, readonly) NSNumber *dataCollectionEnabledNum;
@property (nonatomic, readonly) NSObject *dataCollectionObject;
@property (nonatomic, readonly) NSString *descriptionString;
@property (nonatomic, readonly) unsigned long long domainAvailability;
@property (nonatomic, readonly) NSNumber *domainAvailabilityNum;
@property (nonatomic, readonly) long long eventCountLimit;
@property (nonatomic, readonly) long long eventsPerPeriod;
@property (nonatomic, readonly) NSString *formattedName;
@property (nonatomic, readonly) bool isAvailable;
@property (nonatomic, readonly) NSNumber *isAvailableNum;
@property (nonatomic, readonly) bool isHistorical;
@property (nonatomic, readonly) bool isInstant;
@property (nonatomic, readonly) NSString *knowledgeBaseMetadataClass;
@property (nonatomic, readonly) NSString *knowledgeBaseName;
@property (nonatomic, readonly) NSString *monitorClass;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double period;
@property (nonatomic, readonly) NSObject *platformObject;
@property (nonatomic, readonly) long long pollingPeriod;
@property (nonatomic, readonly) bool setupOnDemand;
@property (nonatomic, readonly) bool shouldSaveCurrentEventOnShutdown;
@property (nonatomic, readonly) double temporalPrecision;
@property (nonatomic, readonly) double timeToLive;
@property (nonatomic, readonly) _DKObjectType *valueType;

+ (id)eventStreamPropertiesFromDictionary:(id)arg1;
+ (id)eventStreamPropertiesFromDictionary:(id)arg1 defaultProperties:(id)arg2;

- (void).cxx_destruct;
- (bool)dataCollectionEnabled;
- (id)dataCollectionEnabledNum;
- (id)dataCollectionObject;
- (id)description;
- (id)descriptionString;
- (unsigned long long)domainAvailability;
- (id)domainAvailabilityNum;
- (long long)eventCountLimit;
- (long long)eventsPerPeriod;
- (id)formattedName;
- (id)initFromDictionary:(id)arg1 defaultProperties:(id)arg2;
- (bool)isAvailable;
- (id)isAvailableNum;
- (bool)isHistorical;
- (bool)isInstant;
- (id)knowledgeBaseMetadataClass;
- (id)knowledgeBaseName;
- (id)monitorClass;
- (id)name;
- (double)period;
- (id)platformObject;
- (long long)pollingPeriod;
- (bool)setupOnDemand;
- (bool)shouldSaveCurrentEventOnShutdown;
- (double)temporalPrecision;
- (double)timeToLive;
- (id)valueType;

@end
