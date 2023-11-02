
@interface DMCEnrollmentTableViewIconCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource> {
    NSArray * _icons;
    unsigned long long  _layoutStyle;
    UIStackView * _stackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *icons;
@property (nonatomic) unsigned long long layoutStyle;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConstraintsForStackView:(id)arg1;
- (id)_createImageViewWithImage:(id)arg1;
- (id)_createStackViewWithViews:(id)arg1;
- (double)_iconHeight;
- (double)_iconWidth;
- (id)_systemImageWithName:(id)arg1;
- (void)_updateImageViewsWithCount:(long long)arg1;
- (id)cell;
- (double)cellHeight;
- (double)estimatedCellHeight;
- (id)icons;
- (id)initWithIconImages:(id)arg1 layoutStyle:(unsigned long long)arg2;
- (id)initWithIconNames:(id)arg1;
- (id)initWithIconNames:(id)arg1 layoutStyle:(unsigned long long)arg2;
- (unsigned long long)layoutStyle;
- (void)layoutSubviews;
- (void)setIconImages:(id)arg1;
- (void)setIconNames:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setLayoutStyle:(unsigned long long)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;

@end
