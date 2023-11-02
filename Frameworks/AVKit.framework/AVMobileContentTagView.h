
@interface AVMobileContentTagView : UIView {
    AVMobileContentTag * _contentTag;
    UILabel * _contentTagViewLabel;
    UIView * _contentView;
    AVMobileChromelessControlsStyleSheet * _styleSheet;
}

@property (nonatomic, retain) AVMobileContentTag *contentTag;
@property (nonatomic, retain) AVMobileChromelessControlsStyleSheet *styleSheet;

- (void).cxx_destruct;
- (id)contentTag;
- (id)initWithContentTag:(id)arg1 withStyleSheet:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setContentTag:(id)arg1;
- (void)setStyleSheet:(id)arg1;
- (id)styleSheet;

@end
