
@interface VCPBSpotlightBookmark : PBCodable <NSCopying> {
    unsigned long long  _identifier;
    NSMutableArray * _pairs;
}

@property (nonatomic) unsigned long long identifier;
@property (nonatomic, retain) NSMutableArray *pairs;

+ (Class)pairsType;

- (void).cxx_destruct;
- (void)addPairs:(id)arg1;
- (void)clearPairs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairs;
- (id)pairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pairsCount;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setPairs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
