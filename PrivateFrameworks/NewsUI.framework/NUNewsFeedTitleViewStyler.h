
@interface NUNewsFeedTitleViewStyler : NSObject <NUTitleViewStyler> {
    long long  _textAlignment;
    UIColor * _textColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, copy) UIColor *textColor;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTextAlignment:(long long)arg1;
- (id)messageLargeFont;
- (id)messageSmallFont;
- (void)setTextColor:(id)arg1;
- (id)styleTextAsMessage:(id)arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)styleTextAsTitle:(id)arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)styleTitleText:(id)arg1 styleType:(unsigned long long)arg2 boundingSize:(struct CGSize { double x1; double x2; })arg3;
- (long long)textAlignment;
- (id)textColor;
- (id)titleExtraLargeFont;
- (id)titleParagraphStyleWithWrapping:(bool)arg1;
- (void)updateWithTextColor:(id)arg1;

@end
