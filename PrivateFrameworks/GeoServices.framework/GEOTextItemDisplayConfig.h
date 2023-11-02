
@interface GEOTextItemDisplayConfig : NSObject <GEOTextItemDisplayConfig> {
    unsigned int  _maxItemsPerRow;
    unsigned int  _maxRowCount;
}

@property (nonatomic, readonly) unsigned int maxItemsPerRow;
@property (nonatomic, readonly) unsigned int maxRowCount;

- (id)init;
- (id)initWithMaxItemsPerRow:(unsigned int)arg1 maxRowCount:(unsigned int)arg2;
- (id)initWithTextItemDisplayConfig:(id)arg1;
- (unsigned int)maxItemsPerRow;
- (unsigned int)maxRowCount;

@end
