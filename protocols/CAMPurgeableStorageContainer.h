
@protocol CAMPurgeableStorageContainer <CAMStorageContainer>

@required

- (void)cancelPurge;
- (<CAMPurgeableStorageContainerDelegate> *)delegate;
- (bool)hasPurgeableResources;
- (bool)isCancelingPurge;
- (bool)isPurging;
- (void)purgeFastPurgeableSpaceWithRequestType:(long long)arg1;
- (void)reportLowDiskEventWithIdentifier:(NSString *)arg1;
- (void)setDelegate:(id <CAMPurgeableStorageContainerDelegate>)arg1;

@end
