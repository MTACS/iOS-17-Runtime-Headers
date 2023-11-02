
@interface MPAVRoutingTableViewHeaderView : UITableViewHeaderFooterView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _titleInsets;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } titleInsets;

- (void)_updateFont;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setTitleInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })titleInsets;

@end
