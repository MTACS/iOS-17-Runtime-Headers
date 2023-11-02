
@interface PersonLinkingLinkedPairEvent : PBCodable <NSCopying> {
    NSMutableArray * _pairs;
    NSString * _userID;
}

@property (nonatomic, readonly) bool hasUserID;
@property (nonatomic, retain) NSMutableArray *pairs;
@property (nonatomic, retain) NSString *userID;

+ (Class)pairsType;

- (void).cxx_destruct;
- (void)addPairs:(id)arg1;
- (void)clearPairs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUserID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairs;
- (id)pairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pairsCount;
- (bool)readFrom:(id)arg1;
- (void)setPairs:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)userID;
- (void)writeTo:(id)arg1;

@end
