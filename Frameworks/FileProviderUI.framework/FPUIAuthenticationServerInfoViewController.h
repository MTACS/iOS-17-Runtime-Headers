
@interface FPUIAuthenticationServerInfoViewController : FPUIAuthenticationTableViewController {
    <FPUIAuthenticationServerInfoDelegate> * _serverInfoDelegate;
    <FPUIAuthenticationServerRepresentation> * _serverRepresentation;
}

@property (nonatomic) <FPUIAuthenticationServerInfoDelegate> *serverInfoDelegate;

- (void).cxx_destruct;
- (id)defaultLeftBarButtonItem;
- (id)initWithServerRepresentation:(id)arg1;
- (void)removeButtonTapped:(id)arg1;
- (id)serverInfoDelegate;
- (void)setServerInfoDelegate:(id)arg1;
- (void)setupTableViewSections;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
