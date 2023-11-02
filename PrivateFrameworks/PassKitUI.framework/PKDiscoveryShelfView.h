
@interface PKDiscoveryShelfView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    NSString * _itemIdentifier;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, copy) NSString *itemIdentifier;

+ (id)viewForShelf:(id)arg1 discoveryCardViewDelegate:(id)arg2;
+ (id)viewForShelf:(id)arg1 discoveryCardViewDelegate:(id)arg2 itemIdentifier:(id)arg3;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemIdentifier;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setItemIdentifier:(id)arg1;

@end
