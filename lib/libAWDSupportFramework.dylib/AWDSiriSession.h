
@interface AWDSiriSession : PBCodable <NSCopying> {
    NSString * _companionModel;
    NSString * _companionOS;
    struct { 
        unsigned int sessionEndTimestamp : 1; 
        unsigned int sessionStartTimestamp : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _sessionEndTimestamp;
    unsigned long long  _sessionStartTimestamp;
    NSMutableArray * _siriRequests;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *companionModel;
@property (nonatomic, retain) NSString *companionOS;
@property (nonatomic, readonly) bool hasCompanionModel;
@property (nonatomic, readonly) bool hasCompanionOS;
@property (nonatomic) bool hasSessionEndTimestamp;
@property (nonatomic) bool hasSessionStartTimestamp;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long sessionEndTimestamp;
@property (nonatomic) unsigned long long sessionStartTimestamp;
@property (nonatomic, retain) NSMutableArray *siriRequests;
@property (nonatomic) unsigned long long timestamp;

+ (Class)siriRequestType;

- (void)addSiriRequest:(id)arg1;
- (void)clearSiriRequests;
- (id)companionModel;
- (id)companionOS;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompanionModel;
- (bool)hasCompanionOS;
- (bool)hasSessionEndTimestamp;
- (bool)hasSessionStartTimestamp;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sessionEndTimestamp;
- (unsigned long long)sessionStartTimestamp;
- (void)setCompanionModel:(id)arg1;
- (void)setCompanionOS:(id)arg1;
- (void)setHasSessionEndTimestamp:(bool)arg1;
- (void)setHasSessionStartTimestamp:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSessionEndTimestamp:(unsigned long long)arg1;
- (void)setSessionStartTimestamp:(unsigned long long)arg1;
- (void)setSiriRequests:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)siriRequestAtIndex:(unsigned long long)arg1;
- (id)siriRequests;
- (unsigned long long)siriRequestsCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
