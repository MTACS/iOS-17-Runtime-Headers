
@interface PXPhotoLibraryChangeDistributor : NSObject <PHPhotoLibraryChangeObserver> {
    NSObject<OS_dispatch_semaphore> * _changeDeliverySemaphore;
    NSObject<OS_dispatch_group> * _changePausingGroup;
    NSMutableSet * _changePausingTokens;
    NSHashTable * _internalObservers;
    NSHashTable * _observers;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=areChangesPaused, nonatomic, readonly) bool changesPaused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyPausedStateChange;
- (bool)areChangesPaused;
- (id)beginPausingChangesWithTimeout:(double)arg1 identifier:(id)arg2;
- (void)dealloc;
- (void)distributeChangeOnMainQueue:(id)arg1;
- (void)endPausingChanges:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)registerInternalChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)unregisterInternalChangeObserver:(id)arg1;

@end
