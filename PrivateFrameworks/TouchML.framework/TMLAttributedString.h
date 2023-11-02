
@interface TMLAttributedString : NSObject <NSCopying, TMLAttributedStringJSExports> {
    NSMutableAttributedString * _attributedString;
}

@property (nonatomic, copy) NSAttributedString *attributedString;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, copy) NSString *string;

+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2;
+ (void)initializeJSContext:(id)arg1;

- (void).cxx_destruct;
- (id)NSAttributedString;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)appendAttributedString:(id)arg1;
- (id)attributedString;
- (id)attributedStringWithAttachment:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)enumerateAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)length;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setString:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)string;

@end
