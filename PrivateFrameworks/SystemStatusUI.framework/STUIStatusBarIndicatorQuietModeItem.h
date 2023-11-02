
@interface STUIStatusBarIndicatorQuietModeItem : STUIStatusBarIndicatorItem {
    STUIStatusBarImageView * _emphasizedImageView;
    NSString * _focusName;
}

@property (nonatomic, retain) STUIStatusBarImageView *emphasizedImageView;
@property (nonatomic, retain) NSString *focusName;

+ (id)emphasizedQuietModeIdentifier;

- (void).cxx_destruct;
- (void)_create_emphasizedImageView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)emphasizedImageView;
- (id)focusName;
- (id)imageViewForIdentifier:(id)arg1;
- (id)indicatorEntryKey;
- (void)setEmphasizedImageView:(id)arg1;
- (void)setFocusName:(id)arg1;
- (bool)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
