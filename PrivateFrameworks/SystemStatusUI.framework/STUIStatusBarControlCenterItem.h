
@interface STUIStatusBarControlCenterItem : STUIStatusBarIndicatorItem {
    STUIStatusBarControlCenterGrabberView * _grabberView;
}

@property (nonatomic, retain) STUIStatusBarControlCenterGrabberView *grabberView;

+ (id)grabberIdentifier;

- (void).cxx_destruct;
- (void)_create_grabberView;
- (id)grabberView;
- (Class)imageViewClass;
- (id)indicatorEntryKey;
- (void)setGrabberView:(id)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
