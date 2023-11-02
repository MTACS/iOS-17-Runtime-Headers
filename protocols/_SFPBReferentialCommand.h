
@protocol _SFPBReferentialCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)referenceIdentifier;
- (void)setReferenceIdentifier:(NSString *)arg1;

@end
