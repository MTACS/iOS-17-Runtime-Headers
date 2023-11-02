
@interface VKCImageBaseOverlayView : VKPlatformView {
    <VKCImageBaseOverlayViewDelegate> * _baseDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    NSString * _customAnalyticsIdentifier;
    long long  _identifierIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedVisibleRect;
    VKCTextRecognitionResult * _recognitionResult;
}

@property (nonatomic, readonly) VKCImageAnalysisResult *analysisResult;
@property (nonatomic) <VKCImageBaseOverlayViewDelegate> *baseDelegate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (nonatomic, copy) NSString *customAnalyticsIdentifier;
@property (nonatomic) long long identifierIndex;
@property (nonatomic, readonly) bool isPublicAPI;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedVisibleRect;
@property (nonatomic, retain) VKCTextRecognitionResult *recognitionResult;

- (void).cxx_destruct;
- (id)analysisResult;
- (id)baseDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (id)customAnalyticsIdentifier;
- (long long)identifierIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPublicAPI;
- (id)normalizedPathFromViewPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })normalizedPointFromViewPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)normalizedQuadFromViewQuad:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedRectFromViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedVisibleRect;
- (void)normalizedVisibleRectDidChange;
- (id)recognitionResult;
- (void)setBaseDelegate:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCustomAnalyticsIdentifier:(id)arg1;
- (void)setIdentifierIndex:(long long)arg1;
- (void)setNormalizedVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRecognitionResult:(id)arg1;
- (void)updateSelectionRectsForWindowChange;
- (id)viewPathFromNormalizedPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })viewPointFromNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)viewQuadFromNormalizedQuad:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewRectFromNormalizedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
