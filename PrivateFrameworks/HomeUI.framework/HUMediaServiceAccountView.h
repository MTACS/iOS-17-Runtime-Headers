
@interface HUMediaServiceAccountView : UIView <HUCellProtocol> {
    UILabel * _accountHandleLabel;
    NSArray * _currentConstraints;
    bool  _iconImageLoadingInProgress;
    UIImageView * _iconView;
    HFItem * _item;
    UILabel * _serviceNameLabel;
}

@property (nonatomic, retain) UILabel *accountHandleLabel;
@property (nonatomic, retain) NSArray *currentConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool iconImageLoadingInProgress;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) UILabel *serviceNameLabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadServiceIconImage;
- (id)accountHandleLabel;
- (id)currentConstraints;
- (bool)iconImageLoadingInProgress;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (id)serviceNameLabel;
- (void)setAccountHandleLabel:(id)arg1;
- (void)setCurrentConstraints:(id)arg1;
- (void)setIconImageLoadingInProgress:(bool)arg1;
- (void)setIconView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setServiceNameLabel:(id)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
