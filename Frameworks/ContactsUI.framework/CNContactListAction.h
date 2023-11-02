
@interface CNContactListAction : NSObject {
    CNContactListActionConfiguration * _configuration;
    NSArray * _contacts;
    <CNContactListActionDelegate> * _delegate;
}

@property (nonatomic, retain) CNContactListActionConfiguration *configuration;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic) <CNContactListActionDelegate> *delegate;

- (void).cxx_destruct;
- (id)configuration;
- (id)contacts;
- (id)delegate;
- (bool)editRequiresAuthorization;
- (bool)editRequiresAuthorizationCheckForContact:(id)arg1 containerIdentifier:(id)arg2;
- (id)initWithContacts:(id)arg1 configuration:(id)arg2;
- (void)performAction;
- (void)setConfiguration:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldReloadListOnCompletion;

@end
