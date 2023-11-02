
@interface STUIStatusBarRadarItem : STUIStatusBarIndicatorItem {
    STUIStatusBarRadarView * _radarItemView;
}

@property (nonatomic, retain) STUIStatusBarRadarView *radarItemView;

- (void).cxx_destruct;
- (void)_create_radarItemView;
- (id)imageForUpdate:(id)arg1;
- (id)imageView;
- (id)indicatorEntryKey;
- (id)radarItemView;
- (void)setRadarItemView:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
