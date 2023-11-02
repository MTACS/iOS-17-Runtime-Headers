
@interface AMSBiometricsTokenUpdateTaskShim : NSObject {
    NSNumber * _accountIdentifier;
}

@property (nonatomic, retain) NSNumber *accountIdentifier;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)initWithAccountIdentifier:(id)arg1;
- (void)runUpdateWithCompletionBlock:(id /* block */)arg1;
- (void)setAccountIdentifier:(id)arg1;

@end
