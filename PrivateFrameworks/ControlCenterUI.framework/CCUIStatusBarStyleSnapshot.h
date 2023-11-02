
@interface CCUIStatusBarStyleSnapshot : NSObject <NSCopying> {
    NSDictionary * _actionsByPartIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _avoidanceFrame;
    bool  _hidden;
    NSString * _hiddenPartIdentifier;
    UIStatusBarStyleRequest * _leadingStyleRequest;
    _UIStatusBarData * _overlayData;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _statusBarInsets;
    UIStatusBarStyleRequest * _trailingStyleRequest;
}

@property (nonatomic, readonly, copy) NSDictionary *actionsByPartIdentifier;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } avoidanceFrame;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly, copy) NSString *hiddenPartIdentifier;
@property (nonatomic, readonly, copy) UIStatusBarStyleRequest *leadingStyleRequest;
@property (nonatomic, readonly, copy) _UIStatusBarData *overlayData;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } statusBarInsets;
@property (nonatomic, readonly, copy) UIStatusBarStyleRequest *trailingStyleRequest;

- (void).cxx_destruct;
- (id)actionsByPartIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avoidanceFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)hiddenPartIdentifier;
- (id)initWithHidden:(bool)arg1 hiddenPartIdentifier:(id)arg2 leadingStyleRequest:(id)arg3 trailingStyleRequest:(id)arg4 overlayData:(id)arg5 actionsByPartIdentifier:(id)arg6 statusBarInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg7 avoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8;
- (bool)isHidden;
- (id)leadingStyleRequest;
- (id)overlayData;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })statusBarInsets;
- (id)trailingStyleRequest;

@end
