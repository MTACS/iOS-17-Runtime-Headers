
@protocol _SFPBRFImageElement <NSObject>

@required

- (void)addSources:(_SFPBRFImageSource *)arg1;
- (void)clearSources;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setSources:(NSArray *)arg1;
- (NSArray *)sources;
- (_SFPBRFImageSource *)sourcesAtIndex:(unsigned long long)arg1;
- (unsigned long long)sourcesCount;

@end
