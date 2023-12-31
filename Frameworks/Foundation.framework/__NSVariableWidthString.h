
@interface __NSVariableWidthString : NSString {
    NSString * _defaultString;
    NSDictionary * _variants;
}

@property (readonly) unsigned long long length;

- (id)_widthVariants;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)formatConfiguration;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithString:(id)arg1 widthVariants:(id)arg2;
- (id)initWithWidthContexts:(id)arg1;
- (id)initWithWidthVariants:(id)arg1;
- (unsigned long long)length;
- (id)variantFittingPresentationWidth:(long long)arg1;

@end
