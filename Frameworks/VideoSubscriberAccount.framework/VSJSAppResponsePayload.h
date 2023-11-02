
@interface VSJSAppResponsePayload : VSJSObject <VSJSAppResponsePayload> {
    NSArray * _userAccounts;
}

@property (nonatomic, copy) NSArray *userAccounts;

- (void).cxx_destruct;
- (void)setUserAccounts:(id)arg1;
- (id)userAccounts;

@end
