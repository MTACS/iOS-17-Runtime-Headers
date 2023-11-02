
@protocol _SFPBRFOptionalFloat <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setValue:(float)arg1;
- (float)value;

@end
