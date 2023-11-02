
@interface PKApplyDocumentUploadPage : PKDynamicProvisioningPageContent {
    NSArray * _acceptableDocuments;
    NSArray * _imageCaptureEncryptionCertificates;
    NSString * _imageCaptureEncryptionVersion;
    bool  _requiresCoreIDVImageCaptureUpload;
}

@property (nonatomic, retain) NSArray *acceptableDocuments;
@property (nonatomic, readonly, copy) NSArray *imageCaptureEncryptionCertificates;
@property (nonatomic, readonly, copy) NSString *imageCaptureEncryptionVersion;
@property (nonatomic, readonly) bool requiresCoreIDVImageCaptureUpload;

- (void).cxx_destruct;
- (id)acceptableDocuments;
- (id)imageCaptureEncryptionCertificates;
- (id)imageCaptureEncryptionVersion;
- (id)initWithJSONObject:(id)arg1;
- (bool)requiresCoreIDVImageCaptureUpload;
- (void)setAcceptableDocuments:(id)arg1;

@end
