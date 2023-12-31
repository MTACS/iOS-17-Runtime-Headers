
@protocol SFCommandValue <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFReferentialCommand *)referentialCommand;
- (void)setReferentialCommand:(SFReferentialCommand *)arg1;

@end
