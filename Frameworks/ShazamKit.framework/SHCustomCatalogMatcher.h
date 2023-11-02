
@interface SHCustomCatalogMatcher : NSObject <SHMatcher> {
    SHCustomCatalog * _customCatalog;
    <SHMatcherDelegate> * _delegate;
    SHCustomCatalogMatcherResultBuilder * _matchResultBuilder;
    MRE * _mre;
}

@property (nonatomic, readonly) SHCustomCatalog *customCatalog;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHMatcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SHCustomCatalogMatcherResultBuilder *matchResultBuilder;
@property (nonatomic, retain) MRE *mre;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MRESignaturesFromMatches:(id)arg1;
- (long long)algorithmToMREAlgorithm:(long long)arg1;
- (id)bestMatchFromMatchedResults:(id)arg1;
- (void)buildMRE;
- (id)customCatalog;
- (id)delegate;
- (id)initWithCustomCatalog:(id)arg1;
- (id)matchLongSignature:(id)arg1;
- (id)matchResultBuilder;
- (id)matchShortSignature:(id)arg1;
- (id)matcherResponseFrom:(id)arg1 signatureAlignments:(id)arg2 querySignature:(id)arg3 error:(id)arg4;
- (id)mre;
- (void)setDelegate:(id)arg1;
- (void)setMre:(id)arg1;
- (void)startRecognitionForRequest:(id)arg1;
- (void)stopRecognition;
- (void)stopRecognitionForRequestID:(id)arg1;
- (long long)storeDensityToMREDensity:(long long)arg1;
- (id)stringIDFromTrackID:(unsigned long long)arg1;
- (bool)supportsTrackingOnSignature:(id)arg1;

@end
