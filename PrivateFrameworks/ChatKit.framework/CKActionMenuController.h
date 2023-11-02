
@interface CKActionMenuController : NSObject {
    CKActionMenuView * _actionMenuView;
    unsigned long long  _defaultActionIndex;
    <CKActionMenuControllerDelegate> * _delegate;
    bool  _shouldDismissOnTap;
}

@property (nonatomic, readonly, copy) NSArray *actionMenuItems;
@property (nonatomic, retain) CKActionMenuView *actionMenuView;
@property (getter=isActionMenuVisible, nonatomic, readonly) bool actionMenuVisible;
@property (nonatomic, readonly) unsigned long long defaultActionIndex;
@property (nonatomic) <CKActionMenuControllerDelegate> *delegate;
@property (nonatomic) bool shouldDismissOnTap;

- (void).cxx_destruct;
- (id)actionMenuItems;
- (id)actionMenuView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertActionMenuFrameToView:(id)arg1;
- (void)dealloc;
- (unsigned long long)defaultActionIndex;
- (id)delegate;
- (void)dismissActionMenuAnimated:(bool)arg1;
- (id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 blurEffectStyle:(long long)arg3;
- (bool)isActionMenuVisible;
- (void)presentActionMenuFromPoint:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (void)setActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (void)setActionMenuView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldDismissOnTap:(bool)arg1;
- (bool)shouldDismissOnTap;

@end
