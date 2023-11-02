
@interface MUPlaceSectionView : UIView <MUActivityObserving> {
    bool  _alwaysHideSeparators;
    UILayoutGuide * _contentLayoutGuide;
    MULinkView * _footerView;
    MUPlaceSectionFooterViewModel * _footerViewModel;
    MUHairlineView * _hairlineView;
    MUPlaceSectionHeaderView * _headerView;
    MUPlaceSectionHeaderViewModel * _headerViewModel;
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *footerViewModel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *headerViewModel;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

+ (id)cardShadowSectionViewForContentView:(id)arg1 sectionHeaderViewModel:(id)arg2;
+ (id)cardShadowSectionViewForContentView:(id)arg1 sectionHeaderViewModel:(id)arg2 sectionFooterViewModel:(id)arg3 alwaysInsetContentView:(bool)arg4;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateForContentSizeChange;
- (void)attachViewToContentView:(id)arg1;
- (void)beginAnimatingActivityIndicator;
- (void)configureWithSectionController:(id)arg1;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (id)footerViewModel;
- (id)headerViewModel;
- (void)hideBottomSeperator;
- (id)initWithStyle:(long long)arg1 alwaysHideSeparators:(bool)arg2;
- (id)initWithStyle:(long long)arg1 alwaysHideSeparators:(bool)arg2 sectionHeaderViewModel:(id)arg3 sectionFooterViewModel:(id)arg4;
- (id)initWithStyle:(long long)arg1 sectionHeaderViewModel:(id)arg2;
- (id)initWithStyle:(long long)arg1 sectionHeaderViewModel:(id)arg2 sectionFooterViewModel:(id)arg3;
- (void)setHeaderAXIdentifierWithBaseString:(id)arg1;
- (long long)style;

@end
