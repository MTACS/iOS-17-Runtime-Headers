
@interface CHTextInputInsertionCaretGesture : CHTextInputGesture {
    struct CGPoint { 
        double x; 
        double y; 
    }  _caretTipPoint;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } caretTipPoint;

- (long long)caretDirection;
- (struct CGPoint { double x1; double x2; })caretTipPoint;
- (void)getAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 expandedToFullTokens:(bool*)arg2;
- (id)initWithCaretTipPoint:(struct CGPoint { double x1; double x2; })arg1 targetContentInfo:(id)arg2 locale:(id)arg3 normalizedDrawing:(id)arg4 originalDrawing:(id)arg5;

@end
