
@interface _CNAUICRRecentContactCNContext : NSObject {
    CNContact * _existingContact;
    CNContact * _interimContact;
}

@property (nonatomic, retain) CNContact *existingContact;
@property (nonatomic, retain) CNContact *interimContact;

- (void).cxx_destruct;
- (id)existingContact;
- (id)interimContact;
- (void)setExistingContact:(id)arg1;
- (void)setInterimContact:(id)arg1;

@end
