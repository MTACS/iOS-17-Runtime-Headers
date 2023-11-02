
@interface HUPopUpButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {
    UIButton * _button;
    HFItem * _item;
    bool  disabled;
}

@property (nonatomic, readonly) UIButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)button;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (id)item;
- (void)prepareForReuse;
- (void)setDisabled:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end
