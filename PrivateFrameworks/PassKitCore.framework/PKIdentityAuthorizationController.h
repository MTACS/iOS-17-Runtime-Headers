
@interface PKIdentityAuthorizationController : NSObject {
    DIIdentityAuthorizationController * _wrapped;
}

@property (nonatomic, retain) DIIdentityAuthorizationController *wrapped;

- (void).cxx_destruct;
- (void)cancelRequest;
- (void)checkCanRequestDocument:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)requestDocument:(id)arg1 completion:(id /* block */)arg2;
- (void)setWrapped:(id)arg1;
- (id)wrapped;

@end
