
@interface _INPBRunWorkflowIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBRunWorkflowIntentResponse> {
    bool  _continueRunning;
    struct { 
        unsigned int continueRunning : 1; 
        unsigned int requestsIntentExecution : 1; 
        unsigned int waitingForResume : 1; 
    }  _has;
    bool  _requestsIntentExecution;
    NSArray * _steps;
    _INPBArchivedObject * _underlyingIntent;
    _INPBArchivedObject * _underlyingIntentResponse;
    NSString * _utterance;
    bool  _waitingForResume;
}

@property (nonatomic) bool continueRunning;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasContinueRunning;
@property (nonatomic) bool hasRequestsIntentExecution;
@property (nonatomic, readonly) bool hasUnderlyingIntent;
@property (nonatomic, readonly) bool hasUnderlyingIntentResponse;
@property (nonatomic, readonly) bool hasUtterance;
@property (nonatomic) bool hasWaitingForResume;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool requestsIntentExecution;
@property (nonatomic, copy) NSArray *steps;
@property (nonatomic, readonly) unsigned long long stepsCount;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBArchivedObject *underlyingIntent;
@property (nonatomic, retain) _INPBArchivedObject *underlyingIntentResponse;
@property (nonatomic, copy) NSString *utterance;
@property (nonatomic) bool waitingForResume;

+ (Class)stepType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addStep:(id)arg1;
- (void)clearSteps;
- (bool)continueRunning;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasContinueRunning;
- (bool)hasRequestsIntentExecution;
- (bool)hasUnderlyingIntent;
- (bool)hasUnderlyingIntentResponse;
- (bool)hasUtterance;
- (bool)hasWaitingForResume;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)requestsIntentExecution;
- (void)setContinueRunning:(bool)arg1;
- (void)setHasContinueRunning:(bool)arg1;
- (void)setHasRequestsIntentExecution:(bool)arg1;
- (void)setHasWaitingForResume:(bool)arg1;
- (void)setRequestsIntentExecution:(bool)arg1;
- (void)setSteps:(id)arg1;
- (void)setUnderlyingIntent:(id)arg1;
- (void)setUnderlyingIntentResponse:(id)arg1;
- (void)setUtterance:(id)arg1;
- (void)setWaitingForResume:(bool)arg1;
- (id)stepAtIndex:(unsigned long long)arg1;
- (id)steps;
- (unsigned long long)stepsCount;
- (id)underlyingIntent;
- (id)underlyingIntentResponse;
- (id)utterance;
- (bool)waitingForResume;
- (void)writeTo:(id)arg1;

@end
