
@protocol _SFPBRFOptionalBool <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setValue:(bool)arg1;
- (bool)value;

@end
