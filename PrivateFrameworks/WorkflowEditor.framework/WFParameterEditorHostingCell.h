
@interface WFParameterEditorHostingCell : UITableViewCell <WFParameterEventObserver> {
    UIViewController * _containingViewController;
    <WFParameterEditorHostingCellDelegate> * _delegate;
    double  _lastWidth;
    WFParameterEditorModel * _model;
    WFParameterHostingView * _modernHostingView;
}

@property (nonatomic) UIViewController *containingViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFParameterEditorHostingCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastWidth;
@property (nonatomic, readonly) WFParameterEditorModel *model;
@property (nonatomic, retain) WFParameterHostingView *modernHostingView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)containingViewController;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)lastWidth;
- (void)layoutSubviews;
- (id)model;
- (id)modernHostingView;
- (void)parameterAttributesDidChange:(id)arg1;
- (void)reconfigureModernView;
- (void)setContainingViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastWidth:(double)arg1;
- (void)setModernHostingView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContext;
- (void)updateModel:(id)arg1;
- (void)updatedParameterState:(id)arg1 isUIUpdate:(bool)arg2;

@end
