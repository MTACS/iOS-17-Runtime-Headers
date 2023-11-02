
@protocol _SFPBCollectionStyleGrid <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (unsigned long long)numberOfColumns;
- (void)setNumberOfColumns:(unsigned long long)arg1;

@end
