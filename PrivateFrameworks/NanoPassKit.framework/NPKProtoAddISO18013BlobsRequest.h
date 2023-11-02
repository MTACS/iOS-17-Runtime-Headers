
@interface NPKProtoAddISO18013BlobsRequest : PBRequest <NSCopying> {
    int  _cardType;
    struct { 
        unsigned int cardType : 1; 
    }  _has;
    NSMutableArray * _isoblobs;
    NSMutableArray * _subcredentialDatas;
}

@property (nonatomic) int cardType;
@property (nonatomic) bool hasCardType;
@property (nonatomic, retain) NSMutableArray *isoblobs;
@property (nonatomic, retain) NSMutableArray *subcredentialDatas;

+ (Class)isoblobsType;
+ (Class)subcredentialDataType;

- (void).cxx_destruct;
- (int)StringAsCardType:(id)arg1;
- (void)addIsoblobs:(id)arg1;
- (void)addSubcredentialData:(id)arg1;
- (int)cardType;
- (id)cardTypeAsString:(int)arg1;
- (void)clearIsoblobs;
- (void)clearSubcredentialDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCardType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)isoblobs;
- (id)isoblobsAtIndex:(unsigned long long)arg1;
- (unsigned long long)isoblobsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCardType:(int)arg1;
- (void)setHasCardType:(bool)arg1;
- (void)setIsoblobs:(id)arg1;
- (void)setSubcredentialDatas:(id)arg1;
- (id)subcredentialDataAtIndex:(unsigned long long)arg1;
- (id)subcredentialDatas;
- (unsigned long long)subcredentialDatasCount;
- (void)writeTo:(id)arg1;

@end
