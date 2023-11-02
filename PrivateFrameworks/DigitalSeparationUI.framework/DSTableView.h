
@interface DSTableView : UITableView {
    NSLayoutConstraint * _heightConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;

- (void).cxx_destruct;
- (void)constrainTableView;
- (id)heightConstraint;
- (id)init;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeightConstraint:(id)arg1;

@end
