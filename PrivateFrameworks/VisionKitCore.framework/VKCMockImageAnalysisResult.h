
@interface VKCMockImageAnalysisResult : VKCImageAnalysisResult {
    NSArray * _allLineQuads;
    NSArray * _dataDetectors;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _isRunningTest;
    NSDictionary * _sourceDict;
    NSString * _text;
    VKCMockTextProvider * _textProvider;
}

@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) bool isRunningTest;
@property (nonatomic, retain) NSDictionary *sourceDict;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) VKCMockTextProvider *textProvider;

+ (id)mockImageAnalysisResultFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)addMockDataDetectorElementsFromArray:(id)arg1;
- (id)adjustTextRangeToSelectableRange:(id)arg1;
- (id)allLineQuads;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (id)dataDetectors;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1 documentView:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)generateText;
- (struct CGSize { double x1; double x2; })imageSize;
- (bool)isRunningTest;
- (id)rangeOfLineForPosition:(id)arg1;
- (id)rangeOfWordForPosition:(id)arg1;
- (id)selectionRectsForRange:(id)arg1 documentView:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsRunningTest:(bool)arg1;
- (void)setSourceDict:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextProvider:(id)arg1;
- (id)smallestSelectableRangeForPosition:(id)arg1;
- (id)sourceDict;
- (id)stringForLine:(id)arg1;
- (id)text;
- (id)textProvider;

@end
