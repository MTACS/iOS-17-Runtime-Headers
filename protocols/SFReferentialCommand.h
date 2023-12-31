
@protocol SFReferentialCommand <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)referenceIdentifier;
- (void)setReferenceIdentifier:(NSString *)arg1;

@end
