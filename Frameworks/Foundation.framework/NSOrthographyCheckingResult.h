
@interface NSOrthographyCheckingResult : NSTextCheckingResult {
    NSOrthography * _orthography;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

+ (bool)supportsSecureCoding;

- (bool)_adjustRangesWithOffset:(long long)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 orthography:(id)arg2;
- (id)orthography;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (unsigned long long)resultType;

@end
