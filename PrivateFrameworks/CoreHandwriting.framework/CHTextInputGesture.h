
@interface CHTextInputGesture : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  __storedAffectedRange;
    CHTokenizedTextResult * __textResult;
    long long  _gestureType;
    <CHStroke> * _lastStroke;
    NSLocale * _locale;
    CHDrawing * _normalizedDrawing;
    CHDrawing * _originalDrawing;
    bool  _preferCharacterLevel;
    CHTextInputTargetContentInfo * _targetContentInfo;
}

@property (nonatomic) long long gestureType;
@property (nonatomic, readonly) <CHStroke> *lastStroke;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) CHDrawing *normalizedDrawing;
@property (nonatomic, readonly) CHDrawing *originalDrawing;
@property (nonatomic, readonly) bool preferCharacterLevel;
@property (nonatomic, readonly) CHTextInputTargetContentInfo *targetContentInfo;

+ (bool)isDrawingCenterOnBlank:(id)arg1 targetContentInfo:(id)arg2 insertionLocation:(long long*)arg3;
+ (bool)isEditGestureForDrawing:(id)arg1 targetContentInfo:(id)arg2 tentativeResultType:(long long)arg3;
+ (bool)isVerticalBarShapeFromLineResult:(id)arg1 originalDrawing:(id)arg2 isDirectionDownward:(bool*)arg3;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTokenAtCharacterIndex:(long long)arg1 inString:(id)arg2 locale:(id)arg3;
+ (bool)shouldReclassifyGestureType:(long long)arg1;
+ (id)verticalBarGestureFromLineResult:(id)arg1 currentGesture:(id)arg2;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_affectedRangeByAdjustingForProtectedCharacters:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)gestureType;
- (void)getAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 expandedToFullTokens:(bool*)arg2;
- (id)initWithGestureType:(long long)arg1 targetContentInfo:(id)arg2 locale:(id)arg3 normalizedDrawing:(id)arg4 originalDrawing:(id)arg5 lastStroke:(id)arg6 preferCharacterLevel:(bool)arg7;
- (id)lastStroke;
- (id)locale;
- (id)normalizedDrawing;
- (id)originalDrawing;
- (bool)preferCharacterLevel;
- (void)setGestureType:(long long)arg1;
- (id)targetContentInfo;
- (id)textResult;

@end
