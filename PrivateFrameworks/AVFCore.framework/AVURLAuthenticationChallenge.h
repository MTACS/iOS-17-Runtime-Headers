
@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge <AVAssetResourceLoaderRequest> {
    unsigned long long  _requestID;
    struct __CFDictionary { } * _requestInfo;
    AVWeakReference * _weakReference;
}

@property (nonatomic, readonly) unsigned long long _requestID;
@property (nonatomic, readonly) struct __CFDictionary { }*_requestInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (void)_performCancellationByClient;
- (unsigned long long)_requestID;
- (struct __CFDictionary { }*)_requestInfo;
- (bool)_shouldInformDelegateOfFigCancellation;
- (id)_weakReference;
- (void)dealloc;
- (id)init;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestInfo:(struct __CFDictionary { }*)arg3 requestID:(unsigned long long)arg4;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;

@end
