
@interface STSCategoryView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _footerOffset;
    UITableView * _tableView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) struct CGPoint { double x1; double x2; } footerOffset;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGPoint { double x1; double x2; })footerOffset;
- (id)init;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFooterOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)tableView;

@end
