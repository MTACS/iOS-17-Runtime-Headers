
@interface SBHApplicationIcon : SBLeafIcon {
    bool  _uninstalledByUser;
}

@property (nonatomic, readonly, copy) NSString *applicationDisplayName;
@property (getter=isUninstalledByUser, nonatomic) bool uninstalledByUser;

- (void)addApplicationDataSource:(id)arg1;
- (id)application;
- (id)applicationDisplayName;
- (id)applicationPlaceholder;
- (id)automationID;
- (bool)cancelDownload;
- (id)copyWithLeafIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)iconImageCacheIdentifier;
- (id)initWithApplication:(id)arg1;
- (id)initWithApplicationPlaceholder:(id)arg1;
- (id)initWithApplicationWithBundleIdentifier:(id)arg1;
- (id)initWithLeafIdentifier:(id)arg1 application:(id)arg2;
- (id)initWithLeafIdentifier:(id)arg1 applicationPlaceholder:(id)arg2;
- (bool)isApplicationIcon;
- (bool)isUninstalledByUser;
- (void)noteExternalApplicationPlaceholderStateChange;
- (bool)pauseDownload;
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;
- (void)possibleUserTapDidCancel;
- (bool)prioritizeDownload;
- (void)removeApplicationDataSources;
- (void)removeApplicationPlaceholderDataSources;
- (void)replaceIconDataSourcesWithApplication:(id)arg1;
- (void)replaceIconDataSourcesWithApplicationPlaceholder:(id)arg1;
- (bool)resumeDownload;
- (void)setBadge:(id)arg1;
- (void)setUninstalledByUser:(bool)arg1;

@end
