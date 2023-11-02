
@interface UITableViewCellContentView : UIView {
    struct { 
        unsigned int edgesForOverridingDefaultLayoutMargins : 4; 
    }  _contentViewFlags;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _overriddenDefaultLayoutMargins;
}

@property (getter=_overriddenDefaultLayoutMargins, setter=_setOverriddenDefaultLayoutMargins:, nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } overriddenDefaultLayoutMargins;

+ (id)classFallbacksForKeyedArchiver;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_concreteDefaultLayoutMargins;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_overriddenDefaultLayoutMargins;
- (void)_setOverriddenDefaultLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_tableViewCellContentViewCommonSetup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;

@end
