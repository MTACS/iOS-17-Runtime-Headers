
@interface WBSFormAutoFillMetadataCorrector : NSObject {
    WBSFormAutoFillClassificationToCorrectionsTransformer * _classificationToCorrectionsTransformer;
    NSMutableSet * _correctedFormMetadataID;
    <WBSFormAutoFillCorrectionsStore> * _correctionsStore;
    NSString * _domain;
    NSCache * _fingerprintsToCorrections;
}

@property (nonatomic, readonly) NSString *domain;

- (void).cxx_destruct;
- (void)_commonInitWithDomain:(id)arg1 correctionsStore:(id)arg2;
- (id)bestAvailableMetadataFromControlMetadata:(id)arg1;
- (id)bestAvailableMetadataFromMetadata:(id)arg1;
- (id)domain;
- (void)enqueueCorrectionsRequestForFormMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasAttemptedToCorrectMetadata:(id)arg1;
- (id)init;
- (id)initWithDomain:(id)arg1;

@end
