
@interface HFCameraTimelapseClipManager : NSObject <HFCameraTimelapseClipInfoProvider, HMCameraClipManagerObserver> {
    HMCameraClipManager * _clipManager;
    HMCameraClip * _lastSelectedTimelapseClip;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMCameraClip * _oldestFetchedClip;
    NSDate * _oldestValidDateForTimeline;
    NSArray * _timelapseClips;
    NSObject<OS_dispatch_queue> * _updateQueue;
}

@property (nonatomic) HMCameraClipManager *clipManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMCameraClip *lastSelectedTimelapseClip;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) HMCameraClip *oldestFetchedClip;
@property (nonatomic, retain) NSDate *oldestValidDateForTimeline;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *timelapseClips;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *updateQueue;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_processUpdatedClips:(id)arg1;
- (id)clipManager;
- (void)clipManager:(id)arg1 didUpdateClips:(id)arg2;
- (void)fetchClipsFromStartDate:(id)arg1 toEndDate:(id)arg2 limit:(unsigned long long)arg3;
- (void)fetchTimelapseClips;
- (id)init;
- (id)lastSelectedTimelapseClip;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)oldestFetchedClip;
- (id)oldestValidDateForTimeline;
- (void)setClipManager:(id)arg1;
- (void)setLastSelectedTimelapseClip:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setOldestFetchedClip:(id)arg1;
- (void)setOldestValidDateForTimeline:(id)arg1;
- (void)setTimelapseClips:(id)arg1;
- (void)setUpdateQueue:(id)arg1;
- (id)timelapseClipPositionForDate:(id)arg1 inHighQualityClip:(id)arg2;
- (id)timelapseClipPositionForDate:(id)arg1 inHighQualityClip:(id)arg2 scrubbingType:(unsigned long long)arg3;
- (id)timelapseClips;
- (id)timelapseURLForTimelapseClip:(id)arg1;
- (id)updateQueue;

@end
