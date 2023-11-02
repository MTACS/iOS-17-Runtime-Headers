
@protocol _SFPBCollectionStyle <NSObject>

@required

- (_SFPBCollectionStyleGrid *)collectionStyleGrid;
- (_SFPBCollectionStyleRow *)collectionStyleRow;
- (_SFPBCollectionStyleHorizontallyScrolling *)collectionStyleScrolling;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (unsigned int)initiallyVisibleCardSectionCount;
- (NSData *)jsonData;
- (void)setCollectionStyleGrid:(_SFPBCollectionStyleGrid *)arg1;
- (void)setCollectionStyleRow:(_SFPBCollectionStyleRow *)arg1;
- (void)setCollectionStyleScrolling:(_SFPBCollectionStyleHorizontallyScrolling *)arg1;
- (void)setInitiallyVisibleCardSectionCount:(unsigned int)arg1;
- (unsigned long long)whichValue;

@end
