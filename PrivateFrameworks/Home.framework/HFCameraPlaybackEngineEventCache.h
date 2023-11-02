
@interface HFCameraPlaybackEngineEventCache : NSObject {
    NSMutableArray * _allCameraEvents;
    NSMapTable * _firstOfTheDayClips;
    NSMapTable * _firstOfTheDayEvents;
}

@property (nonatomic, retain) NSMutableArray *allCameraEvents;
@property (nonatomic, readonly) NSArray *cameraClips;
@property (nonatomic, readonly, copy) NSArray *cameraEvents;
@property (nonatomic, readonly) NSMapTable *firstOfTheDayClips;
@property (nonatomic, readonly) NSMapTable *firstOfTheDayEvents;

- (void).cxx_destruct;
- (void)_setupDebugHandler;
- (id)allCameraEvents;
- (id)cameraClips;
- (id)cameraEvents;
- (void)dealloc;
- (id)firstOfTheDayClipForDate:(id)arg1;
- (id)firstOfTheDayClips;
- (id)firstOfTheDayEvents;
- (id)hfCameraRecordingEventsFromArray:(id)arg1;
- (id)init;
- (bool)isEventDisplayable:(id)arg1;
- (bool)isFirstEventOfTheDay:(id)arg1;
- (void)loadEvents:(id)arg1;
- (void)prepareAndAddClip:(id)arg1 toSortedEvents:(id)arg2;
- (void)removeEventUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)resetFirstOfTheDayContainers;
- (void)resetWithEvents:(id)arg1;
- (void)setAllCameraEvents:(id)arg1;
- (id)timelineEligibleEventsFromEvents:(id)arg1;
- (void)updateContainerForCameraRecordingEvent:(id)arg1;
- (void)updateFirstOfTheDayContainersWithEvent:(id)arg1;
- (void)updateWithEvents:(id)arg1 completion:(id /* block */)arg2;

@end
