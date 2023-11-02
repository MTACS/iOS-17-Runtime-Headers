
@interface HDHealthRecordDocumentProcessor : NSObject {
    HDHealthRecordDocumentTypeConfiguration * _configuration;
}

@property (nonatomic, readonly, copy) NSNumber *extractionRulesetVersion;
@property (nonatomic, readonly, copy) HRSSupportedFHIRConfiguration *supportedFHIRConfiguration;

- (void).cxx_destruct;
- (id)_resourceObjectsBatchedPerFHIRRelease:(id)arg1;
- (id)compareExistingPatientResourceData:(id)arg1 incomingPatientResourceData:(id)arg2 error:(id*)arg3;
- (id)extractAttachmentContentFromFHIRResource:(id)arg1 error:(id*)arg2;
- (id)extractionRulesetVersion;
- (id)initWithConfiguration:(id)arg1;
- (id)processExtractionRequest:(id)arg1 error:(id*)arg2;
- (id)processOptInRequest:(id)arg1 redactor:(id)arg2 error:(id*)arg3;
- (id)processReferenceExtractionRequest:(id)arg1 error:(id*)arg2;
- (id)supportedFHIRConfiguration;

@end
