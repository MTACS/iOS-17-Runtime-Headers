
@interface STSCategorySectionHeader : UIView {
    UIButton * _clearButton;
    bool  _clearButtonHidden;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic) bool clearButtonHidden;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (bool)clearButtonHidden;
- (id)init;
- (void)layoutSubviews;
- (void)setClearButtonHidden:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
