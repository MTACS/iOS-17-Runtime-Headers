
@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest {
    NSArray * _subrequests;
}

@property (retain) NSArray *subrequests;

- (void).cxx_destruct;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (void)enumerateSubrequests:(id /* block */)arg1;
- (id)outputFileType;
- (id)outputPathExtension;
- (void)postProcessSuccessfulCompositeRequest;
- (bool)prepareWithError:(id*)arg1;
- (bool)requiresFormatConversion;
- (bool)requiresMetadataChanges;
- (void)setSubrequests:(id)arg1;
- (id)subrequests;

@end
