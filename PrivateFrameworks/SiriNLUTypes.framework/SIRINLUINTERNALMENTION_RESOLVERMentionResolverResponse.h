
@interface SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse : PBCodable <NSCopying> {
    NSMutableArray * _mentions;
    SIRINLUEXTERNALUUID * _requestId;
    NSString * _rewrittenUtterance;
}

@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasRewrittenUtterance;
@property (nonatomic, retain) NSMutableArray *mentions;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *requestId;
@property (nonatomic, retain) NSString *rewrittenUtterance;

+ (Class)mentionsType;

- (void).cxx_destruct;
- (void)addMentions:(id)arg1;
- (void)clearMentions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestId;
- (bool)hasRewrittenUtterance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mentions;
- (id)mentionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mentionsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (id)rewrittenUtterance;
- (void)setMentions:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setRewrittenUtterance:(id)arg1;
- (void)writeTo:(id)arg1;

@end
