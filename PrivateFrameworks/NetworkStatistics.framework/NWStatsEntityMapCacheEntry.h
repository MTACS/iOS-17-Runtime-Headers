
@interface NWStatsEntityMapCacheEntry : NSObject {
    NSObject * _entityName;
    NSDate * _expiryTime;
}

@property (retain) NSObject *entityName;
@property (retain) NSDate *expiryTime;

- (void).cxx_destruct;
- (id)description;
- (id)entityName;
- (id)expiryTime;
- (void)setEntityName:(id)arg1;
- (void)setExpiryTime:(id)arg1;

@end
