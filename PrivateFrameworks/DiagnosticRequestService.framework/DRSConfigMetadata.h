
@interface DRSConfigMetadata : NSObject {
    NSDate * _appliedDate;
    NSDate * _completedDate;
    NSString * _completionDescription;
    unsigned long long  _completionType;
    DRConfig * _config;
    NSUUID * _configUUID;
    bool  _logTelemetry;
    NSDate * _receivedDate;
    bool  _reportToDecisionServer;
    unsigned char  _state;
    NSString * _teamID;
}

@property (nonatomic, readonly) NSDate *appliedDate;
@property (nonatomic, readonly) NSDate *completedDate;
@property (nonatomic, readonly) NSString *completionDescription;
@property (nonatomic, readonly) unsigned long long completionType;
@property (nonatomic, readonly) DRConfig *config;
@property (nonatomic, readonly) NSUUID *configUUID;
@property (nonatomic, readonly) bool logTelemetry;
@property (nonatomic, readonly) NSDate *receivedDate;
@property (nonatomic, readonly) bool reportToDecisionServer;
@property (nonatomic, readonly) unsigned char state;
@property (nonatomic, readonly) NSString *teamID;

+ (id)_ON_CONTEXT_QUEUE_configMetadataForFilterPredicate:(id)arg1 context:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 errorOut:(id*)arg5;
+ (unsigned long long)_ON_CONTEXT_QUEUE_countForFilterPredicate:(id)arg1 context:(id)arg2 errorOut:(id*)arg3;
+ (id)_ON_CONTEXT_QUEUE_existingBackingMOWithConfigUUID:(id)arg1 context:(id)arg2 errorOut:(id*)arg3;
+ (bool)_isValidState:(unsigned char)arg1 completionType:(unsigned long long)arg2 receivedDate:(id)arg3 appliedDate:(id)arg4 completedDate:(id)arg5 completionDescription:(id)arg6;

- (void).cxx_destruct;
- (id)_ON_CONTEXT_QUEUE_initWithConfigMetadataMO:(id)arg1;
- (id)_ON_CONTEXT_QUEUE_moRepresentationInContext:(id)arg1 createIfMissing:(bool)arg2 errorOut:(id*)arg3;
- (bool)_updateContextWithMORepresentation:(id)arg1 errorOut:(id*)arg2;
- (id)_uuidPredicate;
- (id)appliedDate;
- (id)completedDate;
- (id)completionDescription;
- (unsigned long long)completionType;
- (id)config;
- (id)configUUID;
- (id)initWithTeamID:(id)arg1 configUUID:(id)arg2 state:(unsigned char)arg3 completionType:(unsigned long long)arg4 receivedDate:(id)arg5 appliedDate:(id)arg6 completedDate:(id)arg7 completionDescription:(id)arg8 config:(id)arg9 logTelemetry:(bool)arg10 reportToDecisionServer:(bool)arg11;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (bool)logTelemetry;
- (id)receivedDate;
- (bool)reportToDecisionServer;
- (unsigned char)state;
- (id)teamID;

@end
