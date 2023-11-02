
@interface REMTTParagraphStyle : NSObject {
    TTParagraphStyle * _innerStyle;
}

@property (nonatomic, readonly) NSObject *attributedValue;
@property (nonatomic, retain) TTParagraphStyle *innerStyle;
@property (nonatomic, readonly) long long remParagraphStyle;

- (void).cxx_destruct;
- (id)attributedValue;
- (id)initWithContents:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)innerStyle;
- (id)listBulletInAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)remParagraphStyle;
- (void)setInnerStyle:(id)arg1;

@end
