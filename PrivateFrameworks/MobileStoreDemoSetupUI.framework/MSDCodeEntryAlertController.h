
@interface MSDCodeEntryAlertController : UIAlertController <MSDCodeEntryContentViewControllerDelegate> {
    id /* block */  _completion;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)didCompleteVerification:(bool)arg1 forCode:(id)arg2;
- (id)initWithVerificationCode:(id)arg1 completion:(id /* block */)arg2;
- (void)setCompletion:(id /* block */)arg1;

@end
