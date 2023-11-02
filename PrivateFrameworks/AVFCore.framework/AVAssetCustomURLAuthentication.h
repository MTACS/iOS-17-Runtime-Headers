
@interface AVAssetCustomURLAuthentication : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    struct OpaqueFigCustomURLHandler { } * _handler;
}

+ (id)copyKeychainCredentialForUrl:(id)arg1;
+ (int)sendAuthResponse:(struct __CFDictionary { }*)arg1 requestID:(unsigned long long)arg2 disposition:(long long)arg3 credential:(id)arg4 authHandler:(struct OpaqueFigCustomURLHandler { }*)arg5;

- (int)_handleAuthChallenge:(struct __CFDictionary { }*)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(char *)arg3;
- (void)dealloc;
- (id)initWithFigAsset:(struct OpaqueFigAsset { }*)arg1;

@end
