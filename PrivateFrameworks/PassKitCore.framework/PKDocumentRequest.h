
@interface PKDocumentRequest : NSObject {
    NSString * _countryCode;
    DIAttributeDocument * _documentAttribute;
    unsigned long long  _documentType;
}

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, retain) DIAttributeDocument *documentAttribute;
@property (nonatomic) unsigned long long documentType;

- (void).cxx_destruct;
- (id)countryCode;
- (id)documentAttribute;
- (unsigned long long)documentType;
- (void)setCountryCode:(id)arg1;
- (void)setDocumentAttribute:(id)arg1;
- (void)setDocumentType:(unsigned long long)arg1;

@end
