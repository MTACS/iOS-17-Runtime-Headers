
@interface HUButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {
    bool  _destructive;
    bool  _disabled;
    bool  _hideTitle;
    HFItem * _item;
    long long  _textAlignment;
    bool  _textColorFollowsTintColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDestructive, nonatomic) bool destructive;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideTitle;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic) long long textAlignment;
@property (nonatomic) bool textColorFollowsTintColor;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (bool)hideTitle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDestructive;
- (bool)isDisabled;
- (id)item;
- (void)prepareForReuse;
- (void)setDestructive:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHideTitle:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColorFollowsTintColor:(bool)arg1;
- (long long)textAlignment;
- (bool)textColorFollowsTintColor;
- (void)tintColorDidChange;
- (void)updateTitle;
- (void)updateUIWithAnimation:(bool)arg1;

@end
