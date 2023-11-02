
@interface STTableViewHeaderFooterView : UITableViewHeaderFooterView {
    UILayoutGuide * _contentLayoutGuide;
    NSArray * _rtlContentLayoutGuideConstraints;
}

@property (nonatomic, readonly) UILayoutGuide *contentLayoutGuide;
@property (nonatomic, copy) NSArray *rtlContentLayoutGuideConstraints;

- (void).cxx_destruct;
- (id)contentLayoutGuide;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1 useLayoutMarginsGuide:(bool)arg2;
- (void)layoutSubviews;
- (id)rtlContentLayoutGuideConstraints;
- (void)setRtlContentLayoutGuideConstraints:(id)arg1;

@end
