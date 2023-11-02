
@interface _ICURLRequest : NSObject {
    NSURL * _URL;
    NSString * _action;
    NSString * _bundleIdentifier;
    bool  _callbackRequest;
    bool  _deferCompletionUntilReturn;
    id /* block */  _failureHandler;
    NSURL * _generatedCallbackURL;
    bool  _internalCallbackRequest;
    NSDictionary * _parameters;
    long long  _retries;
    ICScheme * _scheme;
    NSString * _sourceName;
    NSString * _subAction;
    id /* block */  _successHandler;
    NSString * _successURLQueryString;
    NSUUID * _uniqueID;
    <WFUserInterfaceHost> * _userInterface;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *action;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (getter=isCallbackRequest, nonatomic) bool callbackRequest;
@property (nonatomic) bool deferCompletionUntilReturn;
@property (nonatomic, copy) id /* block */ failureHandler;
@property (nonatomic, copy) NSURL *generatedCallbackURL;
@property (getter=isInternalCallbackRequest, nonatomic) bool internalCallbackRequest;
@property (nonatomic, readonly, copy) id /* block */ opener;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic) long long retries;
@property (nonatomic, readonly) ICScheme *scheme;
@property (nonatomic, copy) NSString *sourceName;
@property (nonatomic, readonly) NSString *subAction;
@property (nonatomic, copy) id /* block */ successHandler;
@property (nonatomic, copy) NSString *successURLQueryString;
@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, readonly) <WFUserInterfaceHost> *userInterface;

+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 fromSourceApplication:(id)arg2;
+ (id)requestWithURL:(id)arg1 scheme:(id)arg2 userInterface:(id)arg3 bundleIdentifier:(id)arg4 successHandler:(id /* block */)arg5 failureHandler:(id /* block */)arg6;

- (void).cxx_destruct;
- (id)URL;
- (id)action;
- (id)bundleIdentifier;
- (bool)deferCompletionUntilReturn;
- (id)description;
- (id /* block */)failureHandler;
- (id)generatedCallbackURL;
- (id)initWithURL:(id)arg1 scheme:(id)arg2 userInterface:(id)arg3 successHandler:(id /* block */)arg4 failureHandler:(id /* block */)arg5 bundleIdentifier:(id)arg6;
- (bool)isCallbackRequest;
- (bool)isInternalCallbackRequest;
- (id /* block */)opener;
- (id)parameters;
- (void)parseActions;
- (long long)retries;
- (id)scheme;
- (void)setCallbackRequest:(bool)arg1;
- (void)setDeferCompletionUntilReturn:(bool)arg1;
- (void)setFailureHandler:(id /* block */)arg1;
- (void)setGeneratedCallbackURL:(id)arg1;
- (void)setInternalCallbackRequest:(bool)arg1;
- (void)setParameters:(id)arg1;
- (void)setRetries:(long long)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSuccessHandler:(id /* block */)arg1;
- (void)setSuccessURLQueryString:(id)arg1;
- (id)sourceName;
- (id)subAction;
- (id /* block */)successHandler;
- (id)successURLQueryString;
- (id)uniqueID;
- (id)userInterface;

@end
