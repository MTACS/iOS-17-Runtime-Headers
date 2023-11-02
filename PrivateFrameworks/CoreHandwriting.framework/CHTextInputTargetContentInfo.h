
@interface CHTextInputTargetContentInfo : NSObject <NSMutableCopying> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _activePreviewRange;
    int  _autoCapitalizationMode;
    int  _autoCorrectionMode;
    int  _baseWritingDirection;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _characterRectsInReferenceSubstring;
    bool  _containsCommittedStrokes;
    int  _contentType;
    bool  _isCursorStrong;
    bool  _isSingleLine;
    long long  _lastCharacterLevelPosition;
    NSIndexSet * _protectedCharacterIndexes;
    NSString * _referenceSubstring;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _referenceSubstringRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedTextRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _strokeCoveredTextRange;
    bool  _supportsAutoLineBreaks;
    long long  _textContentLength;
    CHTextInputTarget * _textInputTarget;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } activePreviewRange;
@property (nonatomic, readonly) int autoCapitalizationMode;
@property (nonatomic, readonly) int autoCorrectionMode;
@property (nonatomic, readonly) int baseWritingDirection;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*characterRectsInReferenceSubstring;
@property (nonatomic, readonly) bool containsCommittedStrokes;
@property (nonatomic, readonly) int contentType;
@property (nonatomic, readonly) bool isCursorStrong;
@property (nonatomic, readonly) bool isSingleLine;
@property (nonatomic, readonly) long long lastCharacterLevelPosition;
@property (nonatomic, readonly, copy) NSIndexSet *protectedCharacterIndexes;
@property (nonatomic, readonly, copy) NSString *referenceSubstring;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } referenceSubstringRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedTextRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } strokeCoveredTextRange;
@property (nonatomic, readonly) bool supportsAutoLineBreaks;
@property (nonatomic, readonly) long long textContentLength;
@property (nonatomic, readonly) CHTextInputTarget *textInputTarget;

- (void).cxx_destruct;
- (long long)absoluteLocationFromRelativeLocation:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })activePreviewRange;
- (int)autoCapitalizationMode;
- (int)autoCorrectionMode;
- (int)baseWritingDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })characterRectForCharacterIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })characterRectForComposedCharacterAtIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)characterRectsInReferenceSubstring;
- (bool)containsCommittedStrokes;
- (int)contentType;
- (void)dealloc;
- (id)description;
- (void)enumerateCharacterRectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 block:(id /* block */)arg2;
- (void)enumerateCharacterRectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 reverse:(bool)arg2 block:(id /* block */)arg3;
- (id)initWithTextInputTarget:(id)arg1 contentLength:(long long)arg2 referenceSubstring:(id)arg3 referenceSubstringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 charRectsInReferenceSubstring:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 strokeCoveredTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 activePreviewRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg8 contentType:(int)arg9 lastCharacterLevelPosition:(long long)arg10;
- (id)initWithTextInputTarget:(id)arg1 contentLength:(long long)arg2 referenceSubstring:(id)arg3 referenceSubstringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 charRectsInReferenceSubstring:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 strokeCoveredTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 activePreviewRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg8 lastCharacterLevelPosition:(long long)arg9;
- (id)initWithTextInputTarget:(id)arg1 contentLength:(long long)arg2 referenceSubstring:(id)arg3 referenceSubstringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 charRectsInReferenceSubstring:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 strokeCoveredTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 isCursorStrong:(bool)arg8 activePreviewRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg9 contentType:(int)arg10 autoCapitalizationMode:(int)arg11 autoCorrectionMode:(int)arg12 isSingleLine:(bool)arg13 lastCharacterLevelPosition:(long long)arg14;
- (id)initWithTextInputTarget:(id)arg1 contentLength:(long long)arg2 referenceSubstring:(id)arg3 referenceSubstringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 charRectsInReferenceSubstring:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 strokeCoveredTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 isCursorStrong:(bool)arg8 activePreviewRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg9 contentType:(int)arg10 isSingleLine:(bool)arg11 lastCharacterLevelPosition:(long long)arg12;
- (bool)isCursorStrong;
- (bool)isSingleLine;
- (long long)lastCharacterLevelPosition;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)protectedCharacterIndexes;
- (id)referenceSubstring;
- (id)referenceSubstringInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })referenceSubstringRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })referenceSubstringRangeOfComposedCharacterAtIndex:(long long)arg1;
- (long long)relativeLocationFromAbsoluteLocation:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedTextRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })strokeCoveredTextRange;
- (bool)supportsAutoLineBreaks;
- (long long)textContentLength;
- (id)textInputTarget;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionCharacterRects;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visualCharacterRectForCharacterIndex:(long long)arg1;

@end
