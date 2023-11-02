
@interface CPSBaseEntityContentViewController : UIViewController <CPSEntityContentViewControllerDelegate> {
    CPEntity * _entity;
    CPSEntityResourceProvider * _resourceProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPEntity *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPSEntityResourceProvider *resourceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didUpdateEntity:(id)arg1;
- (id)entity;
- (id)initWithEntity:(id)arg1 resourceProvider:(id)arg2;
- (id)resourceProvider;
- (void)setResourceProvider:(id)arg1;
- (bool)shouldAppearInUnsafeArea;
- (void)updateWithEntity:(id)arg1;
- (bool)viewController:(id)arg1 didPressButton:(id)arg2;

@end
