
@interface WFParameterHostingView : UIView {
    void hostingController;
    void initialState;
    void updatedState;
}

- (void).cxx_destruct;
- (void)attachToParentViewController:(id)arg1;
- (void)configureConfigurationUIViewWithParameter:(id)arg1 state:(id)arg2 processing:(bool)arg3 shouldFocus:(bool)arg4 variableProvider:(id)arg5 widgetFamily:(long long)arg6 fillProvider:(id)arg7 overridingCellBackgroundColor:(id)arg8 updateBlock:(id /* block */)arg9;
- (void)configureViewWithParameter:(id)arg1 state:(id)arg2 processing:(bool)arg3 shouldFocus:(bool)arg4 variableProvider:(id)arg5 updateBlock:(id /* block */)arg6;
- (void)detachFromParentViewController;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
