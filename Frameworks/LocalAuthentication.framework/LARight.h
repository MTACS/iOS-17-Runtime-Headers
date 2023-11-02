
@interface LARight : NSObject <LARightContextHandlerDelegate> {
    LAAccessKey * _accessKey;
    LARightContextHandler * _contextHandler;
    NSString * _identifier;
    unsigned long long  _instanceID;
    long long  _state;
    long long  _tag;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) long long tag;

// Image: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void).cxx_destruct;
- (id)accessKey;
- (void)authorizeWithLocalizedReason:(id)arg1 completion:(id /* block */)arg2;
- (void)authorizeWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)checkCanAuthorizeWithCompletion:(id /* block */)arg1;
- (id)context;
- (void)dealloc;
- (void)deauthorizeWithCompletion:(id /* block */)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithAccessKey:(id)arg1;
- (id)initWithIdentifier:(id)arg1 accessKey:(id)arg2;
- (id)initWithRequirement:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)rightContextDidBecomeInvalid;
- (void)setContext:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTag:(long long)arg1;
- (long long)state;
- (long long)tag;

// Image: /System/Library/Frameworks/LocalAuthenticationEmbeddedUI.framework/LocalAuthenticationEmbeddedUI

- (void)authorizeWithLocalizedReason:(id)arg1 inPresentationContext:(id)arg2 completion:(id /* block */)arg3;

@end
