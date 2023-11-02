
@interface PUBadgeTransitionInfo : NSObject {
    unsigned long long  _badgesCorner;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _badgesOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    UIView * _snapshotView;
}

@property (nonatomic) unsigned long long badgesCorner;
@property (nonatomic) struct UIOffset { double x1; double x2; } badgesOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) UIView *snapshotView;

- (void).cxx_destruct;
- (unsigned long long)badgesCorner;
- (struct UIOffset { double x1; double x2; })badgesOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)setBadgesCorner:(unsigned long long)arg1;
- (void)setBadgesOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSnapshotView:(id)arg1;
- (id)snapshotView;

@end
