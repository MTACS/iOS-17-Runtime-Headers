
@interface RTIStyledIntermediateText : NSObject <NSSecureCoding> {
    long long  _cursorVisibility;
    NSAttributedString * _displayString;
    NSString * _inputString;
    NSString * _searchString;
    unsigned long long  _selectionOffset;
}

@property (nonatomic) long long cursorVisibility;
@property (nonatomic, readonly) NSAttributedString *displayString;
@property (nonatomic, readonly) NSString *inputString;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;

+ (id)_attributedStringAllowedClasses;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cursorVisibility;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4;
- (id)inputString;
- (bool)isEqual:(id)arg1;
- (id)searchString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)setCursorVisibility:(long long)arg1;

@end
