
@interface _UIONavigationBarTitleRenamerViewMetricsUpdateAction : _UIOServerAction

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textAlignment:(long long)arg2 session:(id)arg3 responseHandler:(id /* block */)arg4;
- (bool)isPermitted;
- (void)performActionFromConnection:(id)arg1;
- (long long)textAlignment;

@end
