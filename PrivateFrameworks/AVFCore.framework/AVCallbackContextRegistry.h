
@interface AVCallbackContextRegistry : NSObject {
    NSMutableDictionary * _contextsForTokens;
    unsigned long long  _currentToken;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
}

+ (void)initialize;
+ (id)sharedCallbackContextRegistry;

- (id)callbackContextForToken:(void*)arg1;
- (void)dealloc;
- (id)init;
- (void*)registerCallbackContextObject:(id)arg1;
- (void)unregisterCallbackContextForToken:(void*)arg1;

@end
