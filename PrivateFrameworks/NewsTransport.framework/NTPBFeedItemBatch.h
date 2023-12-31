
@interface NTPBFeedItemBatch : PBCodable <NSCopying> {
    NSMutableArray * _feedItems;
}

@property (nonatomic, retain) NSMutableArray *feedItems;

+ (Class)feedItemsType;

- (void)addFeedItems:(id)arg1;
- (void)clearFeedItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedItems;
- (id)feedItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedItemsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedItems:(id)arg1;
- (void)writeTo:(id)arg1;

@end
