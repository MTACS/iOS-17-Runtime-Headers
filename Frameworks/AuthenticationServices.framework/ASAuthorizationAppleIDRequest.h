
@interface ASAuthorizationAppleIDRequest : ASAuthorizationOpenIDRequest {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    NSString * _user;
}

@property (nonatomic, copy) NSString *user;

- (void).cxx_destruct;
- (id)init;
- (void)setUser:(id)arg1;
- (id)user;

@end
