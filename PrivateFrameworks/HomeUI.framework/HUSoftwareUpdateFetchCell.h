
@interface HUSoftwareUpdateFetchCell : UITableViewCell <HUCellProtocol> {
    UIActivityIndicatorView * _checkingForUpdateSpinner;
    unsigned long long  _iconSize;
    HUIconView * _iconView;
    HFItem * _item;
    UIStackView * _mainStackView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UIView * _titleSpinnerView;
}

@property (nonatomic, retain) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic, retain) HUIconView *iconView;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) UIStackView *mainStackView;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIView *titleSpinnerView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)checkingForUpdateSpinner;
- (unsigned long long)iconSize;
- (id)iconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (id)mainStackView;
- (void)setCheckingForUpdateSpinner:(id)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setIconView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMainStackView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleSpinnerView:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)titleSpinnerView;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
