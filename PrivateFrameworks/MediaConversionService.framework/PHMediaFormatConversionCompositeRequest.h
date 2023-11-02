
@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest

- (bool)areAllSubrequestsPreflighted;
- (id)compositeRequestCommonInitWithError:(id*)arg1;
- (void)didFinishProcessing;
- (void)didPreflightSubrequest:(id)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (void)enumerateSubrequests:(id /* block */)arg1;
- (bool)isCompositeRequest;
- (void)postProcessSuccessfulCompositeRequest;
- (void)preflightWithConversionManager:(id)arg1;
- (void)propagateRequestOptionsToSubrequests;
- (bool)requiresAccessibilityDescriptionMetadataChange;
- (bool)requiresCaptionMetadataChange;
- (bool)requiresCreationDateMetadataChange;
- (bool)requiresFormatConversion;
- (bool)requiresLocationMetadataChange;
- (void)setupProgress;

@end
