
@interface _UIPopoverHostManagerPopoverCreationConfiguration : NSObject {
    id /* block */  _completionBlock;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    UIViewController * _contentViewController;
    unsigned long long  _permittedArrowDirections;
    bool  _showsArrow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRectInParentUIWindow;
    UIView * _sourceView;
    long long  _userInterfaceStyle;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) bool showsArrow;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRectInParentUIWindow;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic) long long userInterfaceStyle;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentViewController;
- (unsigned long long)permittedArrowDirections;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentViewController:(id)arg1;
- (void)setPermittedArrowDirections:(unsigned long long)arg1;
- (void)setShowsArrow:(bool)arg1;
- (void)setSourceRectInParentUIWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (bool)showsArrow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRectInParentUIWindow;
- (id)sourceView;
- (long long)userInterfaceStyle;

@end
