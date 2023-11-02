
@interface _UICursorAccessoryViewController : UIViewController <_UICursorAccessoryItemDataSource> {
    NSArray * _accessories;
    NSDictionary * _accessoriesByIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cursorRect;
    <_UICursorAccessoryViewControllerDelegate> * _delegate;
    _UICursorAccessoryHostView * _hostView;
    UITextRange * _selectedRange;
    NSArray * _selectionRects;
    bool  _visible;
}

@property (nonatomic, retain) NSArray *accessories;
@property (nonatomic, retain) NSDictionary *accessoriesByIdentifier;
@property (nonatomic, retain) UIColor *accessoryTintColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cursorRect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UICursorAccessoryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UICursorAccessoryHostView *hostView;
@property (nonatomic, retain) UITextRange *selectedRange;
@property (nonatomic, retain) NSArray *selectionRects;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (struct { id x1; id x2; unsigned long long x3; })_contentForAccessory:(id)arg1;
- (void)_setSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 preferredPlacement:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_updateSelectionRectAnimated:(bool)arg1;
- (id)accessories;
- (id)accessoriesByIdentifier;
- (id)accessoryTintColor;
- (void)configureItemView:(id)arg1 forAccessoryIdentifier:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cursorRect;
- (id)delegate;
- (void)didTapToActivateAccessoryWithIdentifier:(id)arg1;
- (id)hostView;
- (id)init;
- (bool)isVisible;
- (void)loadView;
- (id)selectedRange;
- (id)selectionRects;
- (void)setAccessories:(id)arg1;
- (void)setAccessories:(id)arg1 animated:(bool)arg2;
- (void)setAccessoriesByIdentifier:(id)arg1;
- (void)setAccessoryTintColor:(id)arg1;
- (void)setCursorRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostView:(id)arg1;
- (void)setSelectedRange:(id)arg1;
- (void)setSelectionRects:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 animationStyle:(long long)arg2;
- (void)setVisible:(bool)arg1 animationStyle:(long long)arg2 completion:(id /* block */)arg3;
- (void)viewDidLoad;

@end
