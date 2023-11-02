
@interface STUIStatusBarVoiceControlPillItem : STUIStatusBarVoiceControlItem {
    struct CGSize { 
        double width; 
        double height; 
    }  _pillSize;
    STUIStatusBarPillView * _pillView;
}

@property (nonatomic) struct CGSize { double x1; double x2; } pillSize;
@property (nonatomic, retain) STUIStatusBarPillView *pillView;

- (void).cxx_destruct;
- (id)_backgroundColorForVoiceControlType:(long long)arg1 styleAttributes:(id)arg2;
- (void)_create_pillView;
- (bool)_pulsingForVoiceControlType:(long long)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (double)imageOpacityForVoiceControlType:(long long)arg1;
- (struct CGSize { double x1; double x2; })pillSize;
- (id)pillView;
- (void)setPillSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPillView:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
