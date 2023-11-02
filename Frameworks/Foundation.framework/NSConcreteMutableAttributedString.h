
@interface NSConcreteMutableAttributedString : NSMutableAttributedString {
    struct { 
        unsigned int attributeFixingDisabled : 8; 
        unsigned int mayNeedIntentResolution : 8; 
        unsigned int  : 16; 
    }  fields;
    NSMutableRLEArray * mutableAttributes;
    NSMutableString * mutableString;
}

+ (Class)_mutableStringClass;
+ (bool)supportsSecureCoding;

- (void)_markIntentsResolved;
- (void)_markRequiringIntentResolution;
- (bool)_mayRequireIntentResolution;
- (id)_runArrayHoldingAttributes;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)dealloc;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (unsigned long long)length;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)string;

@end
