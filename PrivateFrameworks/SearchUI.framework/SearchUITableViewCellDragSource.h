
@interface SearchUITableViewCellDragSource : SearchUIDragSource {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _customEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } customEdgeInsets;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customEdgeInsets;
- (id)dragParametersForPreviewView:(id)arg1;
- (void)setCustomEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
