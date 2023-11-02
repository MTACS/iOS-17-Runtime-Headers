
@protocol _SFPBSplitCardSection <NSObject>

@required

- (void)addListItems:(NSString *)arg1;
- (_SFPBRichText *)body;
- (_SFPBRichText *)bottomTitle;
- (void)clearListItems;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)listItems;
- (NSString *)listItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)listItemsCount;
- (NSString *)listMoreString;
- (NSString *)listPrefix;
- (_SFPBRichText *)secondaryTopTitle;
- (void)setBody:(_SFPBRichText *)arg1;
- (void)setBottomTitle:(_SFPBRichText *)arg1;
- (void)setListItems:(NSArray *)arg1;
- (void)setListMoreString:(NSString *)arg1;
- (void)setListPrefix:(NSString *)arg1;
- (void)setSecondaryTopTitle:(_SFPBRichText *)arg1;
- (void)setTopTitle:(_SFPBRichText *)arg1;
- (_SFPBRichText *)topTitle;

@end
