
@interface NNMKProtoCoalescedBatchedFetchResult : PBCodable <NSCopying> {
    NSMutableArray * _fetchResults;
}

@property (nonatomic, retain) NSMutableArray *fetchResults;

+ (Class)fetchResultsType;

- (void).cxx_destruct;
- (void)addFetchResults:(id)arg1;
- (void)clearFetchResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fetchResults;
- (id)fetchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fetchResultsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFetchResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
