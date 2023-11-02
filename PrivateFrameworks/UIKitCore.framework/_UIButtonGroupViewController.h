
@interface _UIButtonGroupViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    NSArray * _barButtonItemGroups;
    _UIButtonBar * _buttonBar;
    _UIButtonBar * _originalOwner;
    bool  _overLightKeyboard;
    UIScrollView * _scrollView;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)backgroundColor;
- (void)dismissIfNecessary;
- (id)initWithBarButtonItemGroups:(id)arg1 overLightKeyboard:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setBackgroundColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)viewWillAppear:(bool)arg1;

@end
