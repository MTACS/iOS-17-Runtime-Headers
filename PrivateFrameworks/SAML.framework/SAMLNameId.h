
@interface SAMLNameId : SAMLBaseElement

@property (nonatomic, readonly) NSString *format;
@property (nonatomic, readonly) NSString *nameQualifier;
@property (nonatomic, readonly) NSString *spNameQualifier;
@property (nonatomic, readonly) NSString *spProvidedId;

+ (id)createElement:(id*)arg1;

- (id)format;
- (id)nameQualifier;
- (id)spNameQualifier;
- (id)spProvidedId;

@end
