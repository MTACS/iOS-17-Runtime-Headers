
@interface _MultiplatformDonationRecencyStore : NSObject {
    NSMutableArray * _appDateInfo;
    NSMutableDictionary * _infoByLocalID;
    NSMutableDictionary * _infoByRemoteID;
}

- (void).cxx_destruct;
- (id)bundlesFromMostRecentlyProvidingPlatforms;
- (id)init;
- (void)updateDataWithRemoteBundleIdentifier:(id)arg1 remoteDate:(id)arg2 localBundleIdentifier:(id)arg3 localDate:(id)arg4;

@end
