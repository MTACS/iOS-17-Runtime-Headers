
@interface PXStorySongResourcePreloadingOperation : PXAsyncOperation <NSProgressReporting, PXChangeObserver> {
    NSProgress * _progress;
    NSObject<OS_dispatch_queue> * _queue;
    <PXStorySongResource> * _resource;
    PXAudioSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) <PXStorySongResource> *resource;
@property (nonatomic, retain) PXAudioSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSongResource:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)progress;
- (void)px_start;
- (id)queue;
- (id)resource;
- (id)session;
- (void)setQueue:(id)arg1;
- (void)setSession:(id)arg1;

@end
