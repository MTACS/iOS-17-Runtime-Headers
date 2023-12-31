
@interface AVAssetWriterInputPassDescriptionResponder : NSObject {
    id /* block */  _callbackBlock;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _hasRespondedAtLeastOnce;
    AVAssetWriterInputPassDescription * _mostRecentPassDescription;
    NSObject<OS_dispatch_queue> * _serializationQueue;
    int  _stoppedResponding;
}

- (bool)_hasStoppedResponding;
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
- (void)dealloc;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1 block:(id /* block */)arg2;
- (void)respondToNewPassDescription:(id)arg1;
- (void)stopRespondingToPassDescriptions;

@end
