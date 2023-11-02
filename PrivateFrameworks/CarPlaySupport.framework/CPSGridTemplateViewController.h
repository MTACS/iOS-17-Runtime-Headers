
@interface CPSGridTemplateViewController : CPSBaseTemplateViewController <CPGridTemplateProviding, CPSButtonDelegate> {
    CPSGridTemplateCollectionView * _gridView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPGridTemplate *gridTemplate;
@property (nonatomic) CPSGridTemplateCollectionView *gridView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buttonForIdentifier:(id)arg1;
- (id)_prepareCPSGridButtonsForButtons:(id)arg1;
- (void)_viewDidLoad;
- (bool)_wantsNowPlayingButton;
- (void)didSelectButton:(id)arg1;
- (id)gridTemplate;
- (id)gridView;
- (id)initWithGridTemplate:(id)arg1 interfaceDelegate:(id)arg2 templateEnvironment:(id)arg3;
- (void)reloadTemplate:(id)arg1;
- (void)setControl:(id)arg1 enabled:(bool)arg2;
- (void)setGridView:(id)arg1;

@end
