
@interface _NSLineMetrics : NSObject {
    struct CGSize { double x1; double x2; } * _advancesBuf;
    NSAttributedString * _attributedString;
    double * _finalAdvances;
    unsigned long long  _glyphCapacity;
    bool * _hasAdvanceAdjustment;
    unsigned long long  _hasShaping;
    double * _initialAdvances;
    bool  _isInCalculatePositions;
    struct __CTLine { } * _line;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _lineRange;
    struct __CFLocale { } * _locale;
    double * _positions;
    struct __CFArray { } * _runsBuf;
    long long * _stringIndicesBuf;
    unsigned long long  _terminalAdvancesCapacity;
    bool  _terminalAdvancesValid;
}

@property (readonly) NSAttributedString *attributedString;
@property (readonly) struct __CTLine { }*line;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } lineRange;
@property (nonatomic) struct __CFLocale { }*locale;

- (void).cxx_destruct;
- (void)_calculatePositions;
- (void)_calculatePositions:(double*)arg1 hasAdvanceAdjustment:(bool*)arg2 withCapacity:(unsigned long long)arg3 forAttributedString:(id)arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 line:(struct __CTLine { }*)arg6;
- (void)_ensureGlyphCapacity:(unsigned long long)arg1;
- (void)_ensureTerminalAdvancesCapacity:(unsigned long long)arg1;
- (double)_finalAdvanceForCharacterAtIndex:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)_getInitialAdvanceForComposedCharacterInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 andFinalAdvanceForComposedCharacterInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)_hasShaping;
- (double)_initialAdvanceForCharacterAtIndex:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)attributedString;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 line:(struct __CTLine { }*)arg3;
- (struct __CTLine { }*)line;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lineRange;
- (struct __CFLocale { }*)locale;
- (void)setAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 line:(struct __CTLine { }*)arg3;
- (void)setLocale:(struct __CFLocale { }*)arg1;
- (unsigned long long)suggestedLineBreakAfterIndex:(unsigned long long)arg1 withWidth:(double)arg2;
- (double)widthOfSubstringToIndex:(unsigned long long)arg1;
- (double)widthOfSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
