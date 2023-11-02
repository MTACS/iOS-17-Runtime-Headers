
@interface ACHAchievementsDaemonExtension : NSObject <HDCacheDeleteProvider, HDHealthDaemonExtension, HDHealthDaemonReadyObserver> {
    ACHMobileAssetProvider * _mobileAssetProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)daemonReady:(id)arg1;
- (id)initWithDaemon:(id)arg1 mobileAssetProvider:(id)arg2;
- (long long)purgeSpaceForUrgency:(int)arg1 volume:(id)arg2;
- (long long)purgeableSpaceForUrgency:(int)arg1 volume:(id)arg2;

@end
