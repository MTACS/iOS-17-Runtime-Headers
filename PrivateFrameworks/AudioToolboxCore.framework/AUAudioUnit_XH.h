
@interface AUAudioUnit_XH : AUAudioUnit_XPC {
    id /* block */  _completionBlock;
    NSExtension * _extension;
    NSUUID * _requestIdentifier;
    id /* block */  _speechSynthesisOutputMetadataBlock;
    AUAudioUnit_XPC * _strongInstance;
    NSObject<OS_dispatch_queue> * _viewControllerRequestQueue;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) AUAudioUnit_XPC *strongInstance;

+ (void)instantiateWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 instance:(struct OpaqueAudioComponentInstance { }*)arg3 options:(unsigned int)arg4 completionHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_doOpen:(id)arg1 completion:(id /* block */)arg2;
- (void)_internalInitWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 instance:(struct OpaqueAudioComponentInstance { }*)arg3 completion:(id /* block */)arg4;
- (id /* block */)completionBlock;
- (void)dealloc;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setSpeechSynthesisOutputMetadataBlock:(id /* block */)arg1;
- (void)setStrongInstance:(id)arg1;
- (id /* block */)speechSynthesisOutputMetadataBlock;
- (id)strongInstance;

@end
