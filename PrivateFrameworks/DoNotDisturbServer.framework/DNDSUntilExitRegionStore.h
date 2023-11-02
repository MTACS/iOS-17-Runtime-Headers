
@interface DNDSUntilExitRegionStore : NSObject <NSCopying, NSMutableCopying> {
    NSArray * _activeLifetimeAssertionUUIDs;
    CLRegion * _currentRegion;
    NSNumber * _hasActiveLifetimes;
    NSNumber * _regionEntered;
}

@property (nonatomic, readonly, copy) NSArray *activeLifetimeAssertionUUIDs;
@property (nonatomic, readonly, copy) CLRegion *currentRegion;
@property (nonatomic, readonly, copy) NSNumber *hasActiveLifetimes;
@property (nonatomic, readonly, copy) NSNumber *regionEntered;

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithActiveLifetimeAssertionUUIDs:(id)arg1 currentRegion:(id)arg2 regionEntered:(id)arg3;
- (id)_initWithStore:(id)arg1;
- (id)activeLifetimeAssertionUUIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentRegion;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (id)hasActiveLifetimes;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)regionEntered;

@end
