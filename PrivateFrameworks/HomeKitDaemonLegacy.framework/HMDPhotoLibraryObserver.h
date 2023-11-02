
@interface HMDPhotoLibraryObserver : HMFObject <HMDPhotoLibraryDelegate, HMFTimerDelegate> {
    NSUUID * _UUID;
    double  _changeDebounceLimit;
    HMFTimer * _changeDebounceTimer;
    <HMDPhotoLibraryObserverDelegate> * _delegate;
    NSDate * _initiallyDebouncedChangeDate;
    HMFTimer * _majorUpdateTimer;
    HMFTimer * _minorUpdateTimer;
    HMDPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSUUID *UUID;
@property (readonly) double changeDebounceLimit;
@property (readonly) HMFTimer *changeDebounceTimer;
@property (readonly, copy) NSString *debugDescription;
@property <HMDPhotoLibraryObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSDate *initiallyDebouncedChangeDate;
@property (readonly) HMFTimer *majorUpdateTimer;
@property (readonly) HMFTimer *minorUpdateTimer;
@property (readonly) HMDPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (double)changeDebounceLimit;
- (id)changeDebounceTimer;
- (void)configure;
- (id)delegate;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 photoLibrary:(id)arg3;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 photoLibrary:(id)arg3 minorUpdateTimer:(id)arg4 majorUpdateTimer:(id)arg5 changeDebounceTimer:(id)arg6 changeDebounceLimit:(double)arg7;
- (id)initiallyDebouncedChangeDate;
- (void)invalidate;
- (id)logIdentifier;
- (id)majorUpdateTimer;
- (id)minorUpdateTimer;
- (id)photoLibrary;
- (void)photoLibraryPersonsDidChange;
- (void)setDelegate:(id)arg1;
- (void)setInitiallyDebouncedChangeDate:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
