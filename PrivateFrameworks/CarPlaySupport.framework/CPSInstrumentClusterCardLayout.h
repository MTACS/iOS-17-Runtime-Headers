
@interface CPSInstrumentClusterCardLayout : NSObject {
    unsigned long long  _layoutForCard;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _safeAreaFrame;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    bool  _showETAWithTurnCard;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewAreaFrame;
}

@property (nonatomic) unsigned long long layoutForCard;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safeAreaFrame;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic) bool showETAWithTurnCard;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewAreaFrame;

- (id)initWithSafeAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (unsigned long long)layoutForCard;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeAreaFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setLayoutForCard:(unsigned long long)arg1;
- (void)setSafeAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowETAWithTurnCard:(bool)arg1;
- (void)setViewAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)showETAWithTurnCard;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewAreaFrame;

@end
