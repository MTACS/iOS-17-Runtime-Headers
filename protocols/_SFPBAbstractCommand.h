
@protocol _SFPBAbstractCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setType:(int)arg1;
- (void)setValue:(_SFPBCommandValue *)arg1;
- (int)type;
- (_SFPBCommandValue *)value;

@end
