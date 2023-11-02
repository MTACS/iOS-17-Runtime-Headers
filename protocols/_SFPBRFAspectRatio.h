
@protocol _SFPBRFAspectRatio <NSObject>

@required

- (float)height;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setHeight:(float)arg1;
- (void)setWidth:(float)arg1;
- (float)width;

@end
