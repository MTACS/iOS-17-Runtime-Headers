
@interface DNDSMutableUntilExitRegionStore : DNDSUntilExitRegionStore

@property (nonatomic, copy) NSArray *activeLifetimeAssertionUUIDs;
@property (nonatomic, copy) CLRegion *currentRegion;
@property (nonatomic, copy) NSNumber *hasActiveLifetimes;
@property (nonatomic, copy) NSNumber *regionEntered;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setActiveLifetimeAssertionUUIDs:(id)arg1;
- (void)setCurrentRegion:(id)arg1;
- (void)setHasActiveLifetimes:(id)arg1;
- (void)setRegionEntered:(id)arg1;

@end
