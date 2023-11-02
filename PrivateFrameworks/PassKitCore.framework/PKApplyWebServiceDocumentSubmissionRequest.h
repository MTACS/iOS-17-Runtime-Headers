
@interface PKApplyWebServiceDocumentSubmissionRequest : PKApplyWebServiceRequest {
    NSString * _applicationIdentifier;
    NSData * _backImageData;
    NSURL * _baseURL;
    NSArray * _certificates;
    long long  _channel;
    NSString * _documentCountryCode;
    unsigned long long  _documentType;
    unsigned long long  _featureIdentifier;
    NSData * _frontImageData;
    NSString * _odiAssessment;
    NSData * _uploadedDocumentData;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSData *backImageData;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSArray *certificates;
@property (nonatomic) long long channel;
@property (nonatomic, copy) NSString *documentCountryCode;
@property (nonatomic) unsigned long long documentType;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic, copy) NSData *frontImageData;
@property (nonatomic, copy) NSString *odiAssessment;
@property (nonatomic, copy) NSData *uploadedDocumentData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)applicationIdentifier;
- (id)backImageData;
- (id)baseURL;
- (id)certificates;
- (long long)channel;
- (id)documentCountryCode;
- (unsigned long long)documentType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)featureIdentifier;
- (id)frontImageData;
- (id)initWithCoder:(id)arg1;
- (id)odiAssessment;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBackImageData:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setChannel:(long long)arg1;
- (void)setDocumentCountryCode:(id)arg1;
- (void)setDocumentType:(unsigned long long)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setFrontImageData:(id)arg1;
- (void)setOdiAssessment:(id)arg1;
- (void)setUploadedDocumentData:(id)arg1;
- (id)uploadedDocumentData;

@end
