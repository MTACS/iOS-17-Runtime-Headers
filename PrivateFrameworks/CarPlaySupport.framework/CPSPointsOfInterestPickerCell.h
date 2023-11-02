
@interface CPSPointsOfInterestPickerCell : UITableViewCell {
    bool  _chosen;
}

@property (nonatomic) bool chosen;

+ (id)identifier;

- (bool)chosen;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isSelected;
- (void)prepareForReuse;
- (void)setChosen:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setupViews;

@end
