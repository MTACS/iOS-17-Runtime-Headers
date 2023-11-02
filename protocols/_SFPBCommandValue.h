
@protocol _SFPBCommandValue <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBReferentialCommand *)referentialCommand;
- (void)setReferentialCommand:(_SFPBReferentialCommand *)arg1;

@end
