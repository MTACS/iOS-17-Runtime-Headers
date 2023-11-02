
@interface CNContactOrbHeaderViewController : UIViewController {
    NSArray * _contacts;
    CNContactOrbHeaderView * _headerView;
}

@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic, retain) CNContactOrbHeaderView *headerView;

- (void).cxx_destruct;
- (id)contacts;
- (id)headerView;
- (id)initWithContacts:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (double)suggestedHeaderWidth;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
