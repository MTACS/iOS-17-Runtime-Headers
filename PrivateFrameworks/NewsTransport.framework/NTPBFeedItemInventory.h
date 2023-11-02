
@interface NTPBFeedItemInventory : PBCodable <NSCopying> {
    unsigned int  _feedItemVersion;
    NSMutableArray * _feedItems;
    struct { 
        unsigned int feedItemVersion : 1; 
        unsigned int inventoryVersion : 1; 
    }  _has;
    unsigned int  _inventoryVersion;
    NTPBDate * _lastRefreshed;
}

@property (nonatomic) unsigned int feedItemVersion;
@property (nonatomic, retain) NSMutableArray *feedItems;
@property (nonatomic) bool hasFeedItemVersion;
@property (nonatomic) bool hasInventoryVersion;
@property (nonatomic, readonly) bool hasLastRefreshed;
@property (nonatomic) unsigned int inventoryVersion;
@property (nonatomic, retain) NTPBDate *lastRefreshed;

+ (Class)feedItemsType;

- (void)addFeedItems:(id)arg1;
- (void)clearFeedItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)feedItemVersion;
- (id)feedItems;
- (id)feedItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedItemsCount;
- (bool)hasFeedItemVersion;
- (bool)hasInventoryVersion;
- (bool)hasLastRefreshed;
- (unsigned long long)hash;
- (unsigned int)inventoryVersion;
- (bool)isEqual:(id)arg1;
- (id)lastRefreshed;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedItemVersion:(unsigned int)arg1;
- (void)setFeedItems:(id)arg1;
- (void)setHasFeedItemVersion:(bool)arg1;
- (void)setHasInventoryVersion:(bool)arg1;
- (void)setInventoryVersion:(unsigned int)arg1;
- (void)setLastRefreshed:(id)arg1;
- (void)writeTo:(id)arg1;

@end
