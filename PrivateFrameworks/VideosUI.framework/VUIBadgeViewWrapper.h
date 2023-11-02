
@interface VUIBadgeViewWrapper : NSObject {
    IKViewElement * _badgeElement;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _badgeFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _badgeSize;
    NSString * _badgeType;
    UIView * _badgeView;
}

@property (nonatomic, retain) IKViewElement *badgeElement;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } badgeFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } badgeSize;
@property (nonatomic, retain) NSString *badgeType;
@property (nonatomic, retain) UIView *badgeView;

- (void).cxx_destruct;
- (id)badgeElement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })badgeFrame;
- (struct CGSize { double x1; double x2; })badgeSize;
- (id)badgeType;
- (id)badgeView;
- (void)setBadgeElement:(id)arg1;
- (void)setBadgeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBadgeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBadgeType:(id)arg1;
- (void)setBadgeView:(id)arg1;

@end
