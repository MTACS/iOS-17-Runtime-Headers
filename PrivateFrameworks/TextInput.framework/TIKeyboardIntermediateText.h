
@interface TIKeyboardIntermediateText : NSObject <NSSecureCoding> {
    long long  _candidateOffset;
    NSString * _displayString;
    long long  _highlightSegmentIndex;
    NSString * _inputString;
    NSString * _lastInputString;
    NSArray * _liveConversionSegments;
    NSString * _searchString;
    unsigned long long  _selectionOffset;
}

@property (nonatomic, readonly) long long candidateOffset;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) long long highlightSegmentIndex;
@property (nonatomic, readonly) NSString *inputString;
@property (nonatomic, readonly) NSString *lastInputString;
@property (nonatomic, readonly) NSArray *liveConversionSegments;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;

+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 lastInputString:(id)arg3;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 lastInputString:(id)arg4;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 candidateOffset:(long long)arg5 liveConversionSegments:(id)arg6 highlightSegmentIndex:(long long)arg7 lastInputString:(id)arg8;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 lastInputString:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)candidateOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)highlightSegmentIndex;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 candidateOffset:(unsigned long long)arg5 liveConversionSegments:(id)arg6 highlightSegmentIndex:(long long)arg7 lastInputString:(id)arg8;
- (id)inputString;
- (bool)isEqual:(id)arg1;
- (id)lastInputString;
- (id)liveConversionSegments;
- (id)searchString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;

@end
