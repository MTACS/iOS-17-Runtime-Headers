
@interface PUPhotosFileProviderItemProvider : NSItemProvider {
    bool  __copyToTemporaryDirectoryBeforeCallingOpenInPlaceCompletionHandler;
    NSMutableDictionary * __progressByUUID;
    NSMutableDictionary * __progressProxyByUUID;
    NSMutableDictionary * __progressSubscriberByUUID;
}

@property (nonatomic) bool _copyToTemporaryDirectoryBeforeCallingOpenInPlaceCompletionHandler;
@property (nonatomic, retain) NSMutableDictionary *_progressByUUID;
@property (nonatomic, retain) NSMutableDictionary *_progressProxyByUUID;
@property (nonatomic, retain) NSMutableDictionary *_progressSubscriberByUUID;

- (void).cxx_destruct;
- (void)_completeProgressWithUUID:(id)arg1 success:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)_copyToTemporaryDirectoryBeforeCallingOpenInPlaceCompletionHandler;
- (id)_progressByUUID;
- (id)_progressProxyByUUID;
- (id)_progressSubscriberByUUID;
- (id)_progressURLForTypeIdentifier:(id)arg1;
- (void)_startObservingProgressProxyIfNeeded:(id)arg1 UUID:(id)arg2;
- (id)_startProgressForURL:(id)arg1 UUID:(id)arg2 cancellationHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)loadFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)loadInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)loadObjectOfClass:(Class)arg1 completionHandler:(id /* block */)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)set_copyToTemporaryDirectoryBeforeCallingOpenInPlaceCompletionHandler:(bool)arg1;
- (void)set_progressByUUID:(id)arg1;
- (void)set_progressProxyByUUID:(id)arg1;
- (void)set_progressSubscriberByUUID:(id)arg1;

@end
