
@interface VKCImageAnalysisResult : VKCTextRecognitionResult {
    int  _analysisRequestID;
    VKCImageSubjectContext * _cachedSubjectContext;
    VKCImageAnalyzerRequest * _request;
    double  _totalBoundingBoxTextArea;
    double  _totalQuadTextArea;
    VKCVisualSearchResult * _visualSearchResult;
}

@property (nonatomic) int analysisRequestID;
@property (nonatomic, readonly) NSArray *appClipDataDetectorElements;
@property (nonatomic, readonly) NSArray *barcodeActions;
@property (nonatomic, retain) VKCImageSubjectContext *cachedSubjectContext;
@property (nonatomic, readonly) bool hasImageData;
@property (nonatomic, readonly) NSArray *mrcDataDetectorElements;
@property (nonatomic, readonly) UIMenu *mrcMenu;
@property (nonatomic) UIViewController *presentingViewControllerForMrcAction;
@property (nonatomic, retain) VKCImageAnalyzerRequest *request;
@property (nonatomic, readonly) NSArray *textDataDetectorElements;
@property (nonatomic) double totalBoundingBoxTextArea;
@property (nonatomic) double totalQuadTextArea;
@property (nonatomic, retain) VKCVisualSearchResult *visualSearchResult;
@property (nonatomic, readonly) NSArray *visualSearchResultItems;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)analysisRequestID;
- (id)appClipDataDetectorElements;
- (id)barcodeActions;
- (id)cachedSubjectContext;
- (id)dataDetectorsFromRecognitionResult:(id)arg1;
- (id)ddDictionaryFromDataDetectorElement:(id)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasImageData;
- (id)imageFromNormalizedSubrect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentObservation:(id)arg1 mrcDataDetectors:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
- (id)linesPlistFromSourceDocument:(id)arg1;
- (id)mrcDataDetectorElements;
- (id)mrcMenu;
- (id)presentingViewControllerForMrcAction;
- (id)request;
- (void)setAnalysisRequestID:(int)arg1;
- (void)setCachedSubjectContext:(id)arg1;
- (void)setPresentingViewControllerForMrcAction:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setTotalBoundingBoxTextArea:(double)arg1;
- (void)setTotalQuadTextArea:(double)arg1;
- (void)setVisualSearchResult:(id)arg1;
- (id)textDataDetectorElements;
- (double)totalBoundingBoxTextArea;
- (double)totalQuadTextArea;
- (id)visualSearchResult;
- (id)visualSearchResultItems;
- (id)wordPlistFromOutputRegion:(id)arg1 document:(id)arg2;
- (id)wordsPlistFromRegion:(id)arg1 sourceDocument:(id)arg2;

@end
