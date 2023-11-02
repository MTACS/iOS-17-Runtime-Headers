
@interface STTableWelcomeController : OBTableWelcomeController {
    NSLayoutConstraint * _heightConstraint;
    UITableViewController * _tableViewController;
}

@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) UITableViewController *tableViewController;

- (void).cxx_destruct;
- (void)_contentSizeDidChangeFrom:(struct CGSize { double x1; double x2; })arg1 to:(struct CGSize { double x1; double x2; })arg2;
- (void)dealloc;
- (id)heightConstraint;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setHeightConstraint:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (id)tableViewController;

@end
