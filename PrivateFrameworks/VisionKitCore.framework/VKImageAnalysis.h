
@interface VKImageAnalysis : NSObject <NSSecureCoding> {
    VKFeedbackProvider * _feedbackProvider;
    VKCImageAnalysisResult * _imageAnalysisResult;
    NSString * _requestIdentifier;
}

@property (nonatomic, readonly) int analysisRequestID;
@property (nonatomic) VKFeedbackProvider *feedbackProvider;
@property (nonatomic, readonly) NSArray *filteredNormalizedRectangleQuads;
@property (nonatomic, readonly) NSArray *formRegions;
@property (nonatomic, retain) VKCImageAnalysisResult *imageAnalysisResult;
@property (nonatomic, readonly) unsigned long long recognitionConfidence;
@property (nonatomic, readonly) NSArray *rectangleObservations;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic, readonly) NSString *transcript;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributedStringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_hasVisualSearchElements;
- (id)allLines;
- (id)analysisByReplacingTypes:(unsigned long long)arg1 fromAnalysis:(id)arg2;
- (int)analysisRequestID;
- (id)barcodeActions;
- (unsigned long long)countOfDataDetectorsWithTypes:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)feedbackProvider;
- (id)filteredNormalizedRectangleQuads;
- (id)formRegions;
- (id)formRegionsExcluding:(id)arg1 updateExcludedFields:(bool)arg2;
- (bool)hasResultsForAnalysisTypes:(unsigned long long)arg1;
- (id)imageAnalysisResult;
- (id)initWithAnalysisResult:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mrcMenu;
- (id)presentingViewControllerForMrcAction;
- (id)proposedFormRegionForPoint:(struct CGPoint { double x1; double x2; })arg1 existingFields:(id)arg2 formSize:(struct CGSize { double x1; double x2; })arg3;
- (unsigned long long)recognitionConfidence;
- (id)rectangleObservations;
- (id)requestIdentifier;
- (void)setFeedbackProvider:(id)arg1;
- (void)setImageAnalysisResult:(id)arg1;
- (void)setPresentingViewControllerForMrcAction:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (id)textDataDetectors;
- (id)transcript;
- (void)translateFrom:(id)arg1 to:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)translateTo:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)visualSearchResultItems;
- (bool)writeSecureCodedArchiveToURL:(id)arg1 error:(id*)arg2;

@end
