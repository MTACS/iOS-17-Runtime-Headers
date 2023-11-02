
@interface CKScheduledUpdater : CKManualUpdater {
    NSCountedSet * _holdingUpdatesKeys;
    bool  _updateSynchronouslyIfPossible;
}

@property (nonatomic, retain) NSCountedSet *holdingUpdatesKeys;
@property (nonatomic) bool updateSynchronouslyIfPossible;

- (void).cxx_destruct;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)endHoldingAllUpdates;
- (void)endHoldingAllUpdatesForKey:(id)arg1;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (id)holdingUpdatesKeys;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;
- (bool)isHoldingUpdates;
- (bool)isHoldingUpdatesForKey:(id)arg1;
- (void)setHoldingUpdatesKeys:(id)arg1;
- (void)setNeedsUpdate;
- (void)setUpdateSynchronouslyIfPossible:(bool)arg1;
- (void)updateIfNeeded;
- (bool)updateSynchronouslyIfPossible;

@end
