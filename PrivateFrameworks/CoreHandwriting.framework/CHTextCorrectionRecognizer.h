
@interface CHTextCorrectionRecognizer : NSObject {
    CHCornerDetector * __cornerDetector;
    CHRecognizer * __shapeRecognizer;
    <CHRecognizing> * __textRecognizer;
    bool  _isRemoteRecognition;
    NSArray * _locales;
}

@property (nonatomic, readonly) bool isRemoteRecognition;
@property (nonatomic, readonly, copy) NSArray *locales;

+ (id)_improvedSingleCharacterOneColumnTextResult:(id)arg1 targetContentInfo:(id)arg2 insertionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4 affectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })defaultTextAffectedRangeForTargetContentInfo:(id)arg1;

- (void).cxx_destruct;
- (id)initWithLocales:(id)arg1 remoteRecognition:(bool)arg2 priority:(long long)arg3;
- (bool)isRemoteRecognition;
- (id)locales;
- (id)textCorrectionResultForDrawing:(id)arg1 targetContentInfo:(id)arg2 originalDrawing:(id)arg3 lastStroke:(id)arg4 localTypedContextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 normalizedDrawingScaleFactor:(double)arg6 previousCorrectionResult:(id)arg7;

@end
