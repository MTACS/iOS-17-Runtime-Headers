
@interface PXAnalyticsMemoriesUsageDestination : NSObject <CPAnalyticsDestinationProtocol> {
    long long  _currentURLNavigationKind;
    long long  _defaultNavigationKind;
    <PXDisplayAssetCollection> * _lastAppearedAssetCollection;
    long long  _lastAppearedAssetCollectionNavigationKind;
    long long  _sessionInitialNavigationKind;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)forYouTabOpenedAppEventNameWithNavigationKind:(long long)arg1;
+ (id)forYouTabOpenedEventName;
+ (id)payloadLaunchTypeKey;
+ (id)payloadSessionStartTypeKey;

- (void).cxx_destruct;
- (id)init;
- (void)processEvent:(id)arg1;

@end
