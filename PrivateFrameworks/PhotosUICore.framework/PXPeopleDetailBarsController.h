
@interface PXPeopleDetailBarsController : PXPhotosDetailsBarsController {
    UIButton * _peopleTitleView;
    PHPerson * _person;
}

@property (nonatomic, retain) UIButton *peopleTitleView;
@property (nonatomic, retain) PHPerson *person;

- (void).cxx_destruct;
- (id)createAssetActionManager;
- (id)createTitleView;
- (id)peopleTitleView;
- (id)person;
- (void)setPeopleTitleView:(id)arg1;
- (void)setPerson:(id)arg1;
- (bool)wantsActionMenu;

@end
