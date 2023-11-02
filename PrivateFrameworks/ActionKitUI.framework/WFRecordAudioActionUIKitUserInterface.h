
@interface WFRecordAudioActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFRecordAudioActionUserInterface> {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)finishWithFileRepresentation:(id)arg1 error:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithOutputFormat:(long long)arg1 startImmediately:(bool)arg2 recordingDuration:(double)arg3 completionHandler:(id /* block */)arg4;

@end
