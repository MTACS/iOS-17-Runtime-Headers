
@interface LRRCdmClient : NSObject <CDMClientDelegate> {
    CDMClient * cdmClient;
    CDMNluResponse * replayedNluResponse;
    NSObject<OS_dispatch_semaphore> * semaphoreProcessNluRequest;
    NSObject<OS_dispatch_semaphore> * semaphoreSetup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cleanup;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)processCDMNluRequestCallback:(id)arg1;
- (void)processCDMNluRequestErrorCallback:(id)arg1 error:(id)arg2;
- (id)replayRequestProto:(id)arg1 proto:(id)arg2 outError:(id*)arg3;
- (bool)setup:(id)arg1 rawSpeechProfile:(id)arg2 rawSpeechProfileMetadata:(id)arg3 assetDirPath:(id)arg4 overrideSiriVocabSpans:(id)arg5;
- (void)stopWatchingCdmClientSetup;
- (void)watchCdmClientSetup;

@end
