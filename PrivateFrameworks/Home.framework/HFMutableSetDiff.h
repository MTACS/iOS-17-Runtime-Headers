
@interface HFMutableSetDiff : HFSetDiff {
    bool  _hasChanges;
}

@property (nonatomic, readonly) bool hasChanges;

- (void)_updateHasChanges;
- (void)addObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteAllObjects;
- (void)deleteObject:(id)arg1;
- (void)deleteObjects:(id)arg1;
- (bool)hasChanges;
- (id)initWithFromSet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)updateObject:(id)arg1;
- (void)updateObjects:(id)arg1;

@end
