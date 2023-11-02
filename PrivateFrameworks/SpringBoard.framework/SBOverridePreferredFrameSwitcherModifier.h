
@interface SBOverridePreferredFrameSwitcherModifier : SBSwitcherModifier {
    SBDisplayItem * _displayItem;
    struct CGPoint { 
        double x; 
        double y; 
    }  _newPreferredCenter;
    struct CGSize { 
        double width; 
        double height; 
    }  _newPreferredSize;
}

@property (nonatomic, readonly) SBDisplayItem *displayItem;
@property (nonatomic) struct CGPoint { double x1; double x2; } newPreferredCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } newPreferredFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } newPreferredSize;

- (void).cxx_destruct;
- (id)displayItem;
- (id)initWithDisplayItem:(id)arg1;
- (id)initWithNewPreferredCenter:(struct CGPoint { double x1; double x2; })arg1 forDisplayItem:(id)arg2;
- (id)initWithNewPreferredFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDisplayItem:(id)arg2;
- (id)initWithNewPreferredSize:(struct CGSize { double x1; double x2; })arg1 forDisplayItem:(id)arg2;
- (id)initWithNewPreferredSize:(struct CGSize { double x1; double x2; })arg1 newPreferredCenter:(struct CGPoint { double x1; double x2; })arg2 forDisplayItem:(id)arg3;
- (struct CGPoint { double x1; double x2; })newPreferredCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })newPreferredFrame;
- (struct CGSize { double x1; double x2; })newPreferredSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredFrameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 interfaceOrientation:(long long)arg4;
- (void)setNewPreferredCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNewPreferredFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNewPreferredSize:(struct CGSize { double x1; double x2; })arg1;

@end
