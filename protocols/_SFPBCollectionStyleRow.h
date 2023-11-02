
@protocol _SFPBCollectionStyleRow <NSObject>

@required

- (bool)drawPlattersIfNecessary;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setDrawPlattersIfNecessary:(bool)arg1;

@end
