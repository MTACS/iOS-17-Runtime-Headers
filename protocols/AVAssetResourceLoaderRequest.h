
@protocol AVAssetResourceLoaderRequest <NSObject>

@required

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (void)_performCancellationByClient;
- (unsigned long long)_requestID;
- (struct __CFDictionary { }*)_requestInfo;
- (bool)_shouldInformDelegateOfFigCancellation;
- (AVWeakReference *)_weakReference;

@end
