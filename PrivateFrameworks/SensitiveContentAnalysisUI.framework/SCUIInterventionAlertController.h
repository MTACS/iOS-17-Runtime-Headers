
@interface SCUIInterventionAlertController : UINavigationController <SCUIInterventionContainer> {
    long long  _contentScreen;
    NSDictionary * _contextDictionary;
    <SCUIInterventionViewControllerDelegate> * _interventionDelegate;
    long long  _options;
    SCUIInterventionScreenModel * _screenModel;
    long long  _type;
    long long  _workflow;
}

@property (nonatomic, readonly) long long contentScreen;
@property (nonatomic, readonly, copy) NSDictionary *contextDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SCUIInterventionViewControllerDelegate> *interventionDelegate;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) SCUIInterventionScreenModel *screenModel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long workflow;

+ (id)viewControllerWithWorkflow:(long long)arg1 contextDictionary:(id)arg2;
+ (id)viewControllerWithWorkflow:(long long)arg1 contextDictionary:(id)arg2 options:(long long)arg3;

- (void).cxx_destruct;
- (long long)contentScreen;
- (id)contextDictionary;
- (id)initWithWorkflow:(long long)arg1 contextDictionary:(id)arg2 options:(long long)arg3;
- (id)initWithWorkflow:(long long)arg1 contextDictionary:(id)arg2 options:(long long)arg3 type:(long long)arg4;
- (id)interventionDelegate;
- (long long)options;
- (void)presentAlertScreen;
- (id)screenModel;
- (void)screenOne_acceptButtonPressed;
- (void)screenOne_moreHelpButtonDefaultImplementation;
- (void)screenOne_moreHelpButtonPressed;
- (void)screenOne_notNowButtonPressed;
- (void)screenTwo_acceptButtonPressed;
- (void)screenTwo_messageButtonDefaultImplementation;
- (void)screenTwo_messageButtonPressed;
- (void)screenTwo_notNowButtonPressed;
- (void)setInterventionDelegate:(id)arg1;
- (long long)type;
- (void)viewDidAppear:(bool)arg1;
- (long long)workflow;

@end
