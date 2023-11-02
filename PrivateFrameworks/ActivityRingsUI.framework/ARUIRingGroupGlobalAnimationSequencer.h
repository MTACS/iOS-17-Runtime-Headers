
@interface ARUIRingGroupGlobalAnimationSequencer : NSObject <ARUIAnimationSequencing> {
    CADisplayLink * _displayLink;
    double  _lastUpdateTime;
    ARUIObserverStore * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
- (id)_init;
- (bool)_needsDisplayLink;
- (void)_updateDisplayLink;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
