
@interface VUIOutlineMenuCollectionViewCell : _UICollectionViewOutlineCell {
    NSString * _imageName;
    bool  _shouldAppearAsHeader;
    NSString * _title;
}

@property (nonatomic, retain) NSString *imageName;
@property (nonatomic) bool shouldAppearAsHeader;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;
- (id)imageName;
- (void)prepareForReuse;
- (void)setImageName:(id)arg1;
- (void)setShouldAppearAsHeader:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldAppearAsHeader;
- (id)title;

@end
