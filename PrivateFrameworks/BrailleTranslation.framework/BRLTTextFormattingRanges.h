
@interface BRLTTextFormattingRanges : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _boldRanges;
    NSMutableArray * _italicRanges;
    NSMutableArray * _underlineRanges;
}

@property (nonatomic, retain) NSMutableArray *boldRanges;
@property (nonatomic, retain) NSMutableArray *italicRanges;
@property (nonatomic, retain) NSMutableArray *underlineRanges;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addBoldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addItalicRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addUnderlineRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)boldRanges;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)italicRanges;
- (void)setBoldRanges:(id)arg1;
- (void)setItalicRanges:(id)arg1;
- (void)setUnderlineRanges:(id)arg1;
- (id)underlineRanges;

@end
