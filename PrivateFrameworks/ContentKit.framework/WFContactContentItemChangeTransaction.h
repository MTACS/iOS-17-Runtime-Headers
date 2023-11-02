
@interface WFContactContentItemChangeTransaction : WFContentItemChangeTransaction {
    NSArray * _groupChangeRequest;
    CNMutableContact * _mutableContact;
}

@property (nonatomic, retain) NSArray *groupChangeRequest;
@property (nonatomic, readonly) CNMutableContact *mutableContact;

- (void).cxx_destruct;
- (id)groupChangeRequest;
- (id)initWithContentItem:(id)arg1;
- (id)mutableContact;
- (void)saveWithCompletionHandler:(id /* block */)arg1 isNew:(bool)arg2;
- (void)setGroupChangeRequest:(id)arg1;
- (void)updateEmailAddresses:(id)arg1;
- (void)updatePhoneNumbers:(id)arg1;
- (void)updateStreetAddresses:(id)arg1;
- (void)updateURLs:(id)arg1;

@end
