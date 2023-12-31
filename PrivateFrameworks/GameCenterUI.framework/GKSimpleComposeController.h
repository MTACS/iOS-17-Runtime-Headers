
@interface GKSimpleComposeController : GKBaseComposeController {
    NSString * _defaultMessage;
    id /* block */  _doneHandler;
    NSArray * _players;
    GKComposeHeaderWithStaticRecipients * _toField;
}

@property (nonatomic, retain) NSString *defaultMessage;
@property (nonatomic, copy) id /* block */ doneHandler;
@property (nonatomic, retain) NSArray *players;
@property (nonatomic, retain) GKComposeHeaderWithStaticRecipients *toField;

- (void).cxx_destruct;
- (id)defaultMessage;
- (id /* block */)doneHandler;
- (void)donePressed;
- (void)loadView;
- (id)players;
- (void)pushOntoNavigationController:(id)arg1 withDoneHandler:(id /* block */)arg2;
- (void)setDefaultMessage:(id)arg1;
- (void)setDoneHandler:(id /* block */)arg1;
- (void)setPlayers:(id)arg1;
- (void)setToField:(id)arg1;
- (void)setupSendButton;
- (id)toField;
- (void)viewWillAppear:(bool)arg1;

@end
