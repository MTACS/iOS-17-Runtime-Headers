
@interface PKGSVWalletHeaderView : UIView <PKPGSVSectionHeaderView> {
    UIButton * _actionButton;
    UIActivityIndicatorView * _activityIndicator;
    PKPGSVSectionHeader_BackgroundProvisioningHintView * _backgroundProvisioningHintView;
    <PKGSVWalletHeaderViewDelegate> * _delegate;
    UILabel * _environmentLabel;
    <PKPGSVSectionHeaderDelegate> * _headerDelegate;
    PKButtonBadgeView * _inboxBadge;
    UIButton * _inboxButton;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    UIButton * _orderManagementButton;
    unsigned long long  _passType;
    bool  _showActivityIndicator;
    bool  _sizesDirty;
    UILabel * _titleView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long passType;
@property (nonatomic) bool showActivityIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addTapped;
- (id)_inboxBadgeValue;
- (void)_inboxTapped;
- (bool)_shouldShowInboxButton;
- (void)_showOrderManagement;
- (void)addTapped;
- (void)inboxTapped;
- (id)init;
- (id)initWithPassType:(unsigned long long)arg1 state:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; })arg2 delegate:(id)arg3;
- (void)layoutSubviews;
- (id)leadingView;
- (bool)needsRemoval;
- (unsigned long long)passType;
- (void)setHeaderDelegate:(id)arg1;
- (void)setSectionsState:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; })arg1;
- (void)setShowActivityIndicator:(bool)arg1;
- (void)setShowBackgroundProvisioningHint:(bool)arg1 animated:(bool)arg2;
- (bool)showActivityIndicator;
- (void)showOrderManagement;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)trailingView;
- (void)traitCollectionDidChange:(id)arg1;

@end
