
@interface VSCredentialSaveOperation : VSAsyncOperation {
    VSAccountStore * _accountStore;
    VSOptional * _result;
    NSArray * _unsavedAccounts;
}

@property (nonatomic, retain) VSAccountStore *accountStore;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, copy) NSArray *unsavedAccounts;

- (void).cxx_destruct;
- (void)_didSaveAccounts:(id)arg1 withResult:(bool)arg2 error:(id)arg3;
- (id)accountStore;
- (void)executionDidBegin;
- (id)init;
- (id)initWithUnsavedAccounts:(id)arg1 accountStore:(id)arg2;
- (id)result;
- (void)setAccountStore:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setUnsavedAccounts:(id)arg1;
- (id)unsavedAccounts;

@end
