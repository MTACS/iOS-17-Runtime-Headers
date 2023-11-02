
@interface ICQLiftUIPresenter : NSObject {
    ACAccount * _account;
    ICQLiftUIController * _controller;
    NSDictionary * _data;
    _TtC13iCloudQuotaUI19ICQLiftUIDataSource * _dataSource;
    <ICQLiftUIPresenterDelegate> * _delegate;
    NSURL * _liftUIPageURL;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) ICQLiftUIController *controller;
@property (nonatomic, copy) NSDictionary *data;
@property (nonatomic, retain) _TtC13iCloudQuotaUI19ICQLiftUIDataSource *dataSource;
@property (nonatomic) <ICQLiftUIPresenterDelegate> *delegate;
@property (nonatomic, retain) NSURL *liftUIPageURL;

- (void).cxx_destruct;
- (id)account;
- (id)controller;
- (id)data;
- (id)dataSource;
- (id)delegate;
- (void)didCancel;
- (void)didCancelWithUserInfo:(id)arg1;
- (void)didFinish;
- (void)didFinishWithUserInfo:(id)arg1;
- (void)didLoadWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)embedInViewController:(id)arg1;
- (id)initWithURL:(id)arg1 account:(id)arg2 data:(id)arg3;
- (id)liftUIPageURL;
- (void)performICQActionWithName:(id)arg1 parameters:(id)arg2 completion:(id /* block */)arg3;
- (bool)presentInViewController:(id)arg1 animated:(bool)arg2;
- (bool)pushInNavigationController:(id)arg1 animated:(bool)arg2;
- (void)reloadWithHeaders:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setController:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLiftUIPageURL:(id)arg1;
- (void)updateStoreDataForKey:(id)arg1 value:(id)arg2;

@end
