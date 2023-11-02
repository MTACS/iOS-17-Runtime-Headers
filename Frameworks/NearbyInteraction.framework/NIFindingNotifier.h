
@interface NIFindingNotifier : NSObject {
    NISession * parentSession;
}

- (void).cxx_destruct;
- (id)initWithParentSession:(id)arg1;
- (void)notifyDiscoveredNearbyObjectWithToken:(id)arg1 sharedConfigurationData:(id)arg2;
- (void)notifyRemovedNearbyObjectWithToken:(id)arg1;
- (void)notifyUpdatedHeadingForLocalDevice:(id)arg1;
- (void)notifyUpdatedLocation:(id)arg1 forNearbyObjectWithToken:(id)arg2;
- (void)notifyUpdatedLocationForLocalDevice:(id)arg1;

@end
