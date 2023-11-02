
@interface SBHPeopleWidgetPersonDetailInteractionContext : NSObject <NSCopying> {
    UIView * _containerView;
    UIViewController * _containerViewController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _homeScreenContentFrame;
    UIView * _homeScreenContentView;
    NSURL * _personURL;
    SBIconView * _referenceIconView;
    SBIconView * _sourceIconView;
}

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UIViewController *containerViewController;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } homeScreenContentFrame;
@property (nonatomic, readonly) UIView *homeScreenContentView;
@property (nonatomic, readonly, copy) NSURL *personURL;
@property (nonatomic, readonly) SBIconView *referenceIconView;
@property (nonatomic, readonly) SBIconView *sourceIconView;

- (void).cxx_destruct;
- (id)containerView;
- (id)containerViewController;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })homeScreenContentFrame;
- (id)homeScreenContentView;
- (id)initWithPersonURL:(id)arg1 sourceIconView:(id)arg2 referenceIconView:(id)arg3 containerViewController:(id)arg4 containerView:(id)arg5 homeScreenContentView:(id)arg6 homeScreenContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7;
- (id)personURL;
- (id)referenceIconView;
- (id)sourceIconView;

@end
