
@interface VKCMockTextProvider : NSObject {
    bool  _isRunningTest;
    NSMutableArray * _lines;
    NSString * _text;
}

@property (nonatomic) bool isRunningTest;
@property (nonatomic, retain) NSMutableArray *lines;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (id)adjustTextRangeToSelectableRange:(id)arg1;
- (id)allLineQuads;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1 documentView:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithDictionary:(id)arg1;
- (bool)isRunningTest;
- (id)lineForIndex:(unsigned long long)arg1;
- (id)lines;
- (void)loadInfoFromDictionary:(id)arg1;
- (id)rangeOfLineForPosition:(id)arg1;
- (id)rangeOfWordForPosition:(id)arg1;
- (id)selectionRectsForRange:(id)arg1 documentView:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setIsRunningTest:(bool)arg1;
- (void)setLines:(id)arg1;
- (void)setText:(id)arg1;
- (id)smallestSelectableRangeForPosition:(id)arg1;
- (id)text;
- (id)wordForIndex:(unsigned long long)arg1;

@end
