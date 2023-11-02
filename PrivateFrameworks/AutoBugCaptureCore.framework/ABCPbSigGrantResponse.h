
@interface ABCPbSigGrantResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    int  _globalDecision;
    struct { 
        unsigned int globalDecision : 1; 
    }  _has;
    ABCPbSigConfigWhitelist * _sigConfigWhitelist;
    NSMutableArray * _sigResponses;
    NSString * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int globalDecision;
@property (nonatomic) bool hasGlobalDecision;
@property (nonatomic, readonly) bool hasSigConfigWhitelist;
@property (nonatomic, readonly) bool hasStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ABCPbSigConfigWhitelist *sigConfigWhitelist;
@property (nonatomic, retain) NSMutableArray *sigResponses;
@property (nonatomic, retain) NSString *status;
@property (readonly) Class superclass;

+ (Class)sigResponseType;

- (void).cxx_destruct;
- (int)StringAsGlobalDecision:(id)arg1;
- (void)addSigResponse:(id)arg1;
- (void)clearSigResponses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)globalDecision;
- (id)globalDecisionAsString:(int)arg1;
- (bool)hasGlobalDecision;
- (bool)hasSigConfigWhitelist;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGlobalDecision:(int)arg1;
- (void)setHasGlobalDecision:(bool)arg1;
- (void)setSigConfigWhitelist:(id)arg1;
- (void)setSigResponses:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)sigConfigWhitelist;
- (id)sigResponseAtIndex:(unsigned long long)arg1;
- (id)sigResponses;
- (unsigned long long)sigResponsesCount;
- (id)status;
- (void)writeTo:(id)arg1;

@end
