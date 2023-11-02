
@interface VNImageAnalyzerMultiDetectorAnalysisConfiguration : NSObject <NSCopying> {
    <VNObservationsRecipient> * _observationsRecipient;
}

@property (nonatomic, readonly) <VNObservationsRecipient> *observationsRecipient;

- (void).cxx_destruct;
- (unsigned int)analysisTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithObservationsRecipient:(id)arg1;
- (unsigned int)labelsListType;
- (id)observationsRecipient;

@end
