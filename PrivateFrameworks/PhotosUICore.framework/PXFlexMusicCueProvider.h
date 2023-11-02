
@interface PXFlexMusicCueProvider : NSObject <PXAudioCueProvider, PXChangeObserver> {
    PXFlexMusicLibrary * _library;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _requests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deliverCuesIfNeeded;
- (void)_fetchCuesForAudioAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)requestCuesForAudioAsset:(id)arg1 resultHandler:(id /* block */)arg2;

@end
