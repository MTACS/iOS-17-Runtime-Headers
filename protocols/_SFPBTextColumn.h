
@protocol _SFPBTextColumn <NSObject>

@required

- (void)addSections:(_SFPBTextColumnSection *)arg1;
- (void)clearSections;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)sections;
- (_SFPBTextColumnSection *)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setSections:(NSArray *)arg1;

@end
