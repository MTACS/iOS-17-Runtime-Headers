
@interface _TVListDescriptionViewCell : UICollectionViewCell {
    bool  _disabled;
}

@property (getter=isDisabled, nonatomic) bool disabled;

- (bool)canBecomeFocused;
- (void)didUpdateFocusFromView:(id)arg1;
- (bool)isDisabled;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)prepareForReuse;
- (void)setDisabled:(bool)arg1;

@end
