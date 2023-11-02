
@interface SAMLX509Data : SAMLBaseElement

@property (nonatomic, readonly) NSData *certificate;
@property (nonatomic, readonly) NSData *crl;
@property (nonatomic, readonly) NSString *issuerName;
@property (nonatomic, readonly) NSNumber *serialNumber;
@property (nonatomic, readonly) NSData *ski;
@property (nonatomic, readonly) NSString *subjectName;

+ (id)createElement:(id*)arg1;

- (id)certificate;
- (id)crl;
- (id)issuerName;
- (id)serialNumber;
- (id)ski;
- (id)subjectName;

@end
