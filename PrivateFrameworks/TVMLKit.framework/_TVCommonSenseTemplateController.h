
@interface _TVCommonSenseTemplateController : UIViewController {
    _TVCommonSenseView * _commonSenseView;
    IKViewElement * _templateElement;
}

@property (nonatomic, retain) _TVCommonSenseView *commonSenseView;
@property (nonatomic, retain) IKViewElement *templateElement;

- (void).cxx_destruct;
- (id)_infoTableFromElement:(id)arg1;
- (void)_loadTemplate;
- (void)_updateFooterWithElement:(id)arg1;
- (void)_updateHeaderWithElement:(id)arg1;
- (id)commonSenseView;
- (void)loadView;
- (void)setCommonSenseView:(id)arg1;
- (void)setTemplateElement:(id)arg1;
- (id)templateElement;
- (void)updateWithCommonSenseTemplate:(id)arg1;

@end
