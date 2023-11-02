
@interface SCNAssetCatalogCacheEntry : NSObject {
    id  item;
    double  timestamp;
}

@property (nonatomic, retain) id item;
@property (nonatomic) double timestamp;

- (void)dealloc;
- (id)item;
- (void)setItem:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
