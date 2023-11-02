
@interface RUISpinnerView : RUIElement {
    RUIFooterElement * _footer;
    RemoteUISectionFooter * _footerView;
    RUIHeaderElement * _header;
    RUIHeaderView * _headerView;
    UILabel * _label;
    RUIObjectModel * _objectModel;
    UIActivityIndicatorView * _spinner;
    UIColor * _spinnerColor;
    UIView * _view;
}

@property (nonatomic, retain) RUIFooterElement *footer;
@property (nonatomic, retain) RUIHeaderElement *header;
@property (nonatomic) RUIObjectModel *objectModel;
@property (nonatomic, retain) UIColor *spinnerColor;

- (void).cxx_destruct;
- (id)footer;
- (id)header;
- (id)objectModel;
- (void)setFooter:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setSpinnerColor:(id)arg1;
- (id)spinnerColor;
- (id)spinnerView;
- (void)viewDidLayout;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
