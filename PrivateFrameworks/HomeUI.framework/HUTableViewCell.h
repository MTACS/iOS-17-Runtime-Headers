
@interface HUTableViewCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {
    bool  _disabled;
    HFItem * _item;
    bool  _titleColorFollowsTintColor;
    bool  _valueColorFollowsTintColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic) bool titleColorFollowsTintColor;
@property (nonatomic) bool valueColorFollowsTintColor;

- (void).cxx_destruct;
- (void)_updateDetailTextLabel;
- (void)_updateTitle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (id)item;
- (void)prepareForReuse;
- (void)setDisabled:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setTitleColorFollowsTintColor:(bool)arg1;
- (void)setValueColorFollowsTintColor:(bool)arg1;
- (bool)titleColorFollowsTintColor;
- (void)updateUIWithAnimation:(bool)arg1;
- (bool)valueColorFollowsTintColor;

@end
