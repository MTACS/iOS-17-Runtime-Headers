
@interface _UIOEditMenuPresentationConfiguration : NSObject <NSSecureCoding> {
    bool  _enforcesMenuControllerLifecycle;
    NSString * _identifier;
    long long  _initialUserInterfaceStyle;
    UIMenu * _menu;
    long long  _preferredArrowDirection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetRect;
}

@property (nonatomic, readonly) bool enforcesMenuControllerLifecycle;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long initialUserInterfaceStyle;
@property (nonatomic, readonly) UIMenu *menu;
@property (nonatomic, readonly) long long preferredArrowDirection;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetRect;

+ (id)configurationWithMenu:(id)arg1 preferredArrowDirection:(long long)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 enforcesMenuControllerLifecycle:(bool)arg4 initialUserInterfaceStyle:(long long)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configurationWithTargetOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)enforcesMenuControllerLifecycle;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (long long)initialUserInterfaceStyle;
- (id)menu;
- (long long)preferredArrowDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;

@end
