
@interface HUCheckmarkIconCollectionListCell : HUIconCollectionListCell {
    HUCheckmarkAccessoryView * _checkmarkAccessoryView;
    UICellAccessory * _checkmarkCellAccessory;
    bool  _disablesCheckmark;
    bool  _hidesCheckmark;
}

@property (nonatomic, readonly) HUCheckmarkAccessoryView *checkmarkAccessoryView;
@property (nonatomic, readonly) UICellAccessory *checkmarkCellAccessory;
@property (nonatomic) bool disablesCheckmark;
@property (nonatomic) bool hidesCheckmark;

- (void).cxx_destruct;
- (id)_buildAccessories;
- (id)checkmarkAccessoryView;
- (id)checkmarkCellAccessory;
- (bool)disablesCheckmark;
- (bool)hidesCheckmark;
- (void)setDisablesCheckmark:(bool)arg1;
- (void)setHidesCheckmark:(bool)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end
