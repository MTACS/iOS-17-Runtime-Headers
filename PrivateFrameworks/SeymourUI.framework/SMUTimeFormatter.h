
@interface SMUTimeFormatter : NSFormatter {
    AVTimeFormatter * _formatter;
}

@property (nonatomic) double formatTemplate;
@property (getter=isFullWidth, nonatomic) bool fullWidth;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)editingStringForObjectValue:(id)arg1;
- (double)formatTemplate;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (bool)isFullWidth;
- (bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorDescription:(id*)arg5;
- (void)setFormatTemplate:(double)arg1;
- (void)setFullWidth:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)stringFromSeconds:(double)arg1;
- (long long)style;

@end
