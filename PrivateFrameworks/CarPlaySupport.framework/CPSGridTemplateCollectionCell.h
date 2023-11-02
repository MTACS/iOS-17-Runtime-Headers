
@interface CPSGridTemplateCollectionCell : UICollectionViewCell {
    CPSGridButton * _button;
}

@property (nonatomic, retain) CPSGridButton *button;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)button;
- (bool)canBecomeFocused;
- (void)prepareForReuse;
- (void)setButton:(id)arg1;

@end
