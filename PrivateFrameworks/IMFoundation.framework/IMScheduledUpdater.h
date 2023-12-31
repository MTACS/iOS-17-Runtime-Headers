
@interface IMScheduledUpdater : IMManualUpdater {
    NSCountedSet * _holdingUpdatesKeys;
}

@property (nonatomic, retain) NSCountedSet *holdingUpdatesKeys;

- (void).cxx_destruct;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)endHoldingUpdatesForAllKeys;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (id)holdingUpdatesKeys;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;
- (bool)isHoldingUpdates;
- (bool)isHoldingUpdatesForKey:(id)arg1;
- (void)setHoldingUpdatesKeys:(id)arg1;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;

@end
