
@interface WFIntentDynamicResolver : NSObject {
    NSMutableSet * _activeRequests;
    <WFIntentDynamicResolverDataSource> * _dataSource;
    INCExtensionConnection * _extensionConnection;
    <INCExtensionProxy> * _extensionProxy;
    NSString * _intentKeyPathToResolve;
    unsigned long long  _state;
}

@property (nonatomic, retain) NSMutableSet *activeRequests;
@property (nonatomic, readonly) <WFIntentDynamicResolverDataSource> *dataSource;
@property (nonatomic, readonly) INCExtensionConnection *extensionConnection;
@property (nonatomic, readonly) <INCExtensionProxy> *extensionProxy;
@property (nonatomic, readonly, copy) NSString *intentKeyPathToResolve;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (id)activeRequests;
- (void)beginSessionWithCompletionBlock:(id /* block */)arg1;
- (id)dataSource;
- (void)endSession;
- (id)extensionConnection;
- (id)extensionProxy;
- (void)failWithError:(id)arg1;
- (id)initWithIntentKeyPathToResolve:(id)arg1 dataSource:(id)arg2;
- (id)intent;
- (id)intentKeyPathToResolve;
- (void)populatedSkeletonIntentWithUserInput:(id)arg1 forKeyPath:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)resolveWithUserInput:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setActiveRequests:(id)arg1;
- (unsigned long long)state;

@end
