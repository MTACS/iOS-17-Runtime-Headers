
@interface MUPlaceSectionHeaderView : UIView <MUActivityObserving> {
    UIFocusGuide * _headerFocusGuide;
    MUPlaceSectionHeaderViewModel * _headerViewModel;
    UIButton * _seeAllButton;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupHeader;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (id)initWithViewModel:(id)arg1;

@end
