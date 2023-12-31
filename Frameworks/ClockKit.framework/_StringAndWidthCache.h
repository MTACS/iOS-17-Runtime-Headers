
@interface _StringAndWidthCache : NSObject {
    NSMutableArray * _attributedStrings;
    NSMutableArray * _boxedSizes;
}

- (void).cxx_destruct;
- (void)addAttributedString:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)attributedStringAndSize:(struct CGSize { double x1; double x2; }*)arg1 forMaxWidth:(double)arg2;
- (unsigned long long)attributedStringCount;
- (id)attributedStringForIndex:(unsigned long long)arg1;
- (id)init;
- (id)smallestAttributedStringAndSize:(struct CGSize { double x1; double x2; }*)arg1;

@end
