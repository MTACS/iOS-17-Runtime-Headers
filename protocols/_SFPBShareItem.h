
@protocol _SFPBShareItem <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setSpotlightShareItem:(_SFPBCoreSpotlightShareItem *)arg1;
- (void)setUrlShareItem:(_SFPBURLShareItem *)arg1;
- (_SFPBCoreSpotlightShareItem *)spotlightShareItem;
- (_SFPBURLShareItem *)urlShareItem;
- (unsigned long long)whichValue;

@end
