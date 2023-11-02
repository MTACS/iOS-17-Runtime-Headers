
@interface CAPContactFillerContactFillerEventForShare : PBCodable <NSCopying> {
    NSString * _sessionId;
    NSMutableArray * _shareEvents;
}

@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic, retain) NSMutableArray *shareEvents;

+ (Class)shareEventsType;

- (void).cxx_destruct;
- (void)addShareEvents:(id)arg1;
- (void)clearShareEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void)setShareEvents:(id)arg1;
- (id)shareEvents;
- (id)shareEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shareEventsCount;
- (void)writeTo:(id)arg1;

@end
