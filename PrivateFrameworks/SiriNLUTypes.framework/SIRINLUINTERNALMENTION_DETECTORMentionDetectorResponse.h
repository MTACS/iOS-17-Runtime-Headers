
@interface SIRINLUINTERNALMENTION_DETECTORMentionDetectorResponse : PBCodable <NSCopying> {
    NSMutableArray * _mentions;
    SIRINLUEXTERNALUUID * _requestId;
}

@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, retain) NSMutableArray *mentions;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *requestId;

+ (Class)mentionsType;

- (void).cxx_destruct;
- (void)addMentions:(id)arg1;
- (void)clearMentions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mentions;
- (id)mentionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mentionsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setMentions:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
