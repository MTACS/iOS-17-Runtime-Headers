
@interface CHMutableTextInputTargetContentInfo : CHTextInputTargetContentInfo <NSCopying>

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } activePreviewRange;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (nonatomic) int baseWritingDirection;
@property (nonatomic) bool containsCommittedStrokes;
@property (nonatomic) int contentType;
@property (nonatomic) bool isCursorStrong;
@property (nonatomic) bool isSingleLine;
@property (nonatomic) long long lastCharacterLevelPosition;
@property (nonatomic, copy) NSIndexSet *protectedCharacterIndexes;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedTextRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } strokeCoveredTextRange;
@property (nonatomic) bool supportsAutoLineBreaks;
@property (nonatomic) long long textContentLength;
@property (nonatomic, retain) CHTextInputTarget *textInputTarget;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)characterRectsInReferenceSubstring;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)referenceSubstring;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })referenceSubstringRange;
- (void)setActivePreviewRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAutoCapitalizationMode:(int)arg1;
- (void)setAutoCorrectionMode:(int)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setContainsCommittedStrokes:(bool)arg1;
- (void)setContentType:(int)arg1;
- (void)setIsCursorStrong:(bool)arg1;
- (void)setIsSingleLine:(bool)arg1;
- (void)setLastCharacterLevelPosition:(long long)arg1;
- (void)setProtectedCharacterIndexes:(id)arg1;
- (void)setReferenceSubstring:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 characterRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)setSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStrokeCoveredTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSupportsAutoLineBreaks:(bool)arg1;
- (void)setTextContentLength:(long long)arg1;
- (void)setTextInputTarget:(id)arg1;

@end
