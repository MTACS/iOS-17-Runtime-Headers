
@interface CNContactCardFieldPickerCell : UITableViewCell {
    bool  _displaysValue;
    CNContactCardFieldItem * _item;
}

@property (nonatomic) bool displaysValue;
@property (nonatomic, retain) CNContactCardFieldItem *item;

+ (double)estimatedHeightDisplayingValue:(bool)arg1;

- (void).cxx_destruct;
- (id)attributedDisplayText;
- (bool)displaysValue;
- (id)init;
- (id)item;
- (void)setConfiguration;
- (void)setDisplaysValue:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
