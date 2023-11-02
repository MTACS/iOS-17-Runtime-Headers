
@interface AIAudiogramKeyboardToolbar : UIToolbar {
    UIBarButtonItem * _nextItemButton;
    UIBarButtonItem * _previousItemButton;
}

@property (nonatomic, retain) UIBarButtonItem *nextItemButton;
@property (nonatomic, retain) UIBarButtonItem *previousItemButton;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 target:(id)arg2;
- (id)nextItemButton;
- (id)previousItemButton;
- (void)setNextItemButton:(id)arg1;
- (void)setPreviousItemButton:(id)arg1;

@end
