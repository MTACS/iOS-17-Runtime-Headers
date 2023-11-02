
@interface STUIStatusBarIndicatorItem : STUIStatusBarItem {
    NSArray * _currentImageNamePrefixes;
    STUIStatusBarImageView * _imageView;
}

@property (nonatomic, copy) NSArray *currentImageNamePrefixes;
@property (nonatomic, readonly) bool flipsForRightToLeftLayoutDirection;
@property (nonatomic, readonly) long long fontStyle;
@property (nonatomic, retain) STUIStatusBarImageView *imageView;
@property (nonatomic, readonly) NSString *indicatorEntryKey;
@property (nonatomic, readonly) bool isTemplateImage;

- (void).cxx_destruct;
- (void)_create_imageView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (bool)crossfadeForUpdate:(id)arg1;
- (id)currentImageNamePrefixes;
- (id)dependentEntryKeys;
- (bool)flipsForRightToLeftLayoutDirection;
- (long long)fontStyle;
- (id)imageForUpdate:(id)arg1;
- (id)imageNameForUpdate:(id)arg1;
- (id)imageView;
- (Class)imageViewClass;
- (id)imageViewForIdentifier:(id)arg1;
- (id)indicatorEntryKey;
- (bool)isTemplateImage;
- (void)setCurrentImageNamePrefixes:(id)arg1;
- (void)setImageView:(id)arg1;
- (bool)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
- (bool)useMultiColorSystemImageForUpdate:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
