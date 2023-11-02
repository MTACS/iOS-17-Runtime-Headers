
@interface AXSpeechPronunciationHelper : NSObject <AXUIClientDelegate> {
    bool  _inSession;
    id /* block */  _resultCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetUpdaterClient;
- (float)audioLevel;
- (void)cancelPronunciationSession;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (void)startPronunciationSession:(id)arg1 resultCallback:(id /* block */)arg2;
- (void)stopPronunciationSession;
- (bool)supportsPronunciationSessions;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4;

@end
