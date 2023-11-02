
@interface HUQuickControlCollectionViewCellContainerViewController : UIViewController {
    HUQuickControlViewController * _contentViewController;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredContentLayoutFrameInset;
    unsigned long long  _titlePosition;
}

@property (nonatomic, readonly) HUQuickControlViewController *contentViewController;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredContentLayoutFrameInset;
@property (nonatomic) unsigned long long titlePosition;
@property (nonatomic, retain) HUQuickControlCollectionViewCellContainerView *view;
@property (nonatomic, readonly) HUQuickControlCollectionViewCellContainerView *viewIfLoaded;

+ (id)intrinsicSizeDescriptorControlSizeDescriptor:(id)arg1 titlePosition:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)contentViewController;
- (id)initWithContentViewController:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)loadView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredContentLayoutFrameInset;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setPreferredContentLayoutFrameInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePosition:(unsigned long long)arg1;
- (unsigned long long)titlePosition;

@end
