
@protocol _INPBPayloadNeedsDisambiguation <NSObject>

@required

+ (Class)disambiguationItemsType;

- (void)addDisambiguationItems:(_INPBSelectionItem *)arg1;
- (void)clearDisambiguationItems;
- (NSArray *)disambiguationItems;
- (_INPBSelectionItem *)disambiguationItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationItemsCount;
- (void)setDisambiguationItems:(NSArray *)arg1;

@end
