
@interface PKDataReleaseRequestedDataCell : UITableViewCell {
    UIFont * _bodyFont;
    NSMutableArray * _displayOnlyElementViews;
    NSMutableArray * _doNotRetainElementViews;
    NSArray * _intentDisplayOnlyElements;
    UILabel * _intentDisplayOnlyLabel;
    NSArray * _intentDoNotRetainElements;
    UILabel * _intentDoNotRetainLabel;
    NSArray * _intentRetainElements;
    UILabel * _intentRetainLabel;
    bool  _isTemplateLayout;
    NSMutableArray * _retainElementViews;
    UIView * _separatorView1;
    UIView * _separatorView2;
    UIFont * _subtitleFont;
    UIFont * _titleFont;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIFont *bodyFont;
@property (nonatomic, copy) NSArray *intentDisplayOnlyElements;
@property (nonatomic, copy) NSString *intentDisplayOnlyTitle;
@property (nonatomic, copy) NSArray *intentDoNotRetainElements;
@property (nonatomic, copy) NSString *intentDoNotRetainTitle;
@property (nonatomic, copy) NSArray *intentRetainElements;
@property (nonatomic, copy) NSString *intentRetainTitle;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_recreateViews:(id)arg1 forElements:(id)arg2;
- (id)bodyFont;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)intentDisplayOnlyElements;
- (id)intentDisplayOnlyTitle;
- (id)intentDoNotRetainElements;
- (id)intentDoNotRetainTitle;
- (id)intentRetainElements;
- (id)intentRetainTitle;
- (void)layoutSubviews;
- (void)setBodyFont:(id)arg1;
- (void)setIntentDisplayOnlyElements:(id)arg1;
- (void)setIntentDisplayOnlyTitle:(id)arg1;
- (void)setIntentDoNotRetainElements:(id)arg1;
- (void)setIntentDoNotRetainTitle:(id)arg1;
- (void)setIntentRetainElements:(id)arg1;
- (void)setIntentRetainTitle:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleFont;
- (id)title;
- (id)titleFont;

@end
