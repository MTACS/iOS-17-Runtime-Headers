
@interface _SFSafariDataSharingController : NSObject {
    NSMutableArray * _appBundlesWithSeparateData;
    NSObject<OS_dispatch_queue> * _dataSharingQueue;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_loadAppBundlesWithSeparateDataIfNeeded;
- (void)checkInAppBundleIDIfNeeded:(id)arg1;
- (void)clearAllWebsitesData;
- (id)init;
- (id)systemDataContainerURLWithAppBundleID:(id)arg1;

@end
