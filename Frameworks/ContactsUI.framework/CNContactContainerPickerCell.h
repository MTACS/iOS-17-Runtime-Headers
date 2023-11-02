
@interface CNContactContainerPickerCell : UICollectionViewListCell {
    bool  _allowsDeselection;
}

@property (nonatomic) bool allowsDeselection;

- (bool)allowsDeselection;
- (id)init;
- (void)setAllowsDeselection:(bool)arg1;
- (void)updateConfigurationUsingState:(id)arg1;

@end
