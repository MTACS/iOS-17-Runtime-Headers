
@interface TSKToolbarTitleView : UIView {
    NSString * _title;
    UIColor * _titleColor;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIColor *titleColor;

- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (id)title;
- (id)titleColor;

@end
