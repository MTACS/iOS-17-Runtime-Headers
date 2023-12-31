
@interface TSWPNumberAttachment : TSWPTextualAttachment {
    int  _numberFormat;
    NSString * _stringValue;
}

@property (nonatomic) int numberFormat;
@property (nonatomic, copy) NSString *stringValue;

- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (int)numberFormat;
- (void)setNumberFormat:(int)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringEquivalent;
- (id)stringEquivalentWithLayoutParent:(id)arg1;
- (id)stringValue;
- (id)stringWithNumber:(unsigned long long)arg1;

@end
