
@interface ATXAppLaunchMacEventProvider : NSObject <ATXModeEntityEventProviderProtocol> {
    NSSet * _iOSInstalledApps;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aggregationEventsFromEvent:(id)arg1;
- (id)biomePublisherWithBookmark:(id)arg1;
- (id)biomePublisherWithBookmark:(id)arg1 devicePlatform:(long long)arg2 startTime:(double)arg3;
- (id)dateIntervalFromEvent:(id)arg1;
- (id)eventsFromPublisher;
- (id)iOSBundleIDForMacOSBundleID:(id)arg1;
- (id)init;
- (bool)isEventFromProvider:(id)arg1;
- (bool)publisherIsCoreDuetWrapper;
- (id)remoteDevicesForDevicePlatform:(long long)arg1;
- (void)updateEntitySpecificFeaturesDict:(id)arg1 aggregationEvent:(id)arg2 isLocalToMode:(bool)arg3;

@end
