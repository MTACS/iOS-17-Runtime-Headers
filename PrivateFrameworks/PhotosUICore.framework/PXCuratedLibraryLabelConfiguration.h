
@interface PXCuratedLibraryLabelConfiguration : NSObject <NSCopying> {
    NSString * _text;
    long long  _textAlignment;
    UIColor * _textColor;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;

@end
