
@interface CKDPRecordResolveTokenRequest : PBRequest <NSCopying> {
    bool  _forceFetch;
    struct { 
        unsigned int forceFetch : 1; 
        unsigned int shouldFetchRootRecord : 1; 
    }  _has;
    NSString * _participantId;
    NSMutableArray * _rootRecordDesiredKeys;
    NSString * _routingKey;
    NSData * _shortTokenHash;
    bool  _shouldFetchRootRecord;
}

@property (nonatomic) bool forceFetch;
@property (nonatomic) bool hasForceFetch;
@property (nonatomic, readonly) bool hasParticipantId;
@property (nonatomic, readonly) bool hasRoutingKey;
@property (nonatomic, readonly) bool hasShortTokenHash;
@property (nonatomic) bool hasShouldFetchRootRecord;
@property (nonatomic, retain) NSString *participantId;
@property (nonatomic, retain) NSMutableArray *rootRecordDesiredKeys;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic, retain) NSData *shortTokenHash;
@property (nonatomic) bool shouldFetchRootRecord;

+ (id)options;
+ (Class)rootRecordDesiredKeysType;

- (void).cxx_destruct;
- (void)addRootRecordDesiredKeys:(id)arg1;
- (void)clearRootRecordDesiredKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)forceFetch;
- (bool)hasForceFetch;
- (bool)hasParticipantId;
- (bool)hasRoutingKey;
- (bool)hasShortTokenHash;
- (bool)hasShouldFetchRootRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantId;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)rootRecordDesiredKeys;
- (id)rootRecordDesiredKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)rootRecordDesiredKeysCount;
- (id)routingKey;
- (void)setForceFetch:(bool)arg1;
- (void)setHasForceFetch:(bool)arg1;
- (void)setHasShouldFetchRootRecord:(bool)arg1;
- (void)setParticipantId:(id)arg1;
- (void)setRootRecordDesiredKeys:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setShortTokenHash:(id)arg1;
- (void)setShouldFetchRootRecord:(bool)arg1;
- (id)shortTokenHash;
- (bool)shouldFetchRootRecord;
- (void)writeTo:(id)arg1;

@end
