
@interface ENRegionServerNKDConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _acceptedReportTypes;
    NSString * _healthAuthorityID;
    ENRegion * _region;
    NSURL * _tekLocalDownloadBaseURL;
    NSURL * _tekLocalDownloadIndexURL;
    double  _tekPublishInterval;
    NSURL * _tekUploadURL;
    NSString * _testVerificationAPIKey;
    NSURL * _testVerificationCertificateURL;
    NSURL * _testVerificationURL;
    NSArray * _travelerDownloadConfigurations;
}

@property (nonatomic, readonly, copy) NSArray *acceptedReportTypes;
@property (nonatomic, readonly, copy) NSString *healthAuthorityID;
@property (nonatomic, readonly, copy) ENRegion *region;
@property (nonatomic, readonly, copy) NSURL *tekLocalDownloadBaseURL;
@property (nonatomic, readonly, copy) NSURL *tekLocalDownloadIndexURL;
@property (nonatomic, readonly) double tekPublishInterval;
@property (nonatomic, readonly, copy) NSURL *tekUploadURL;
@property (nonatomic, readonly, copy) NSString *testVerificationAPIKey;
@property (nonatomic, readonly, copy) NSURL *testVerificationCertificateURL;
@property (nonatomic, readonly, copy) NSURL *testVerificationURL;
@property (nonatomic, readonly, copy) NSArray *travelerDownloadConfigurations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptedReportTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)healthAuthorityID;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponseDictionary:(id)arg1;
- (id)region;
- (id)tekLocalDownloadBaseURL;
- (id)tekLocalDownloadIndexURL;
- (double)tekPublishInterval;
- (id)tekUploadURL;
- (id)testVerificationAPIKey;
- (id)testVerificationCertificateURL;
- (id)testVerificationURL;
- (id)travelerDownloadConfigurations;

@end
