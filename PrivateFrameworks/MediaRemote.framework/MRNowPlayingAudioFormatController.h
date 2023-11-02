
@interface MRNowPlayingAudioFormatController : NSObject {
    MRClient * _activeClient;
    MRNowPlayingAudioFormatApplication * _audioFormatApplication;
    MRNowPlayingAudioFormatContentInfo * _audioFormatContentInfo;
    NSArray * _contentInfos;
    <MRNowPlayingAudioFormatControllerDelegate> * _delegate;
    NSString * _foregroundBundleID;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) MRClient *activeClient;
@property (nonatomic, readonly) MRNowPlayingAudioFormatApplication *audioFormatApplication;
@property (nonatomic, readonly) MRNowPlayingAudioFormatContentInfo *audioFormatContentInfo;
@property (nonatomic, readonly, copy) NSString *audioFormatDescription;
@property (nonatomic, readonly) long long bestAvailableAudioFormat;
@property (nonatomic, readonly, copy) NSString *bestAvailableAudioFormatDescription;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, retain) NSArray *contentInfos;
@property (nonatomic) <MRNowPlayingAudioFormatControllerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (getter=isEligibleForSpatialization, nonatomic, readonly) bool eligibleForSpatialization;
@property (nonatomic, retain) NSString *foregroundBundleID;
@property (nonatomic, readonly) bool hasNowPlayingApp;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *layoutMonitor;
@property (getter=isMultichannel, nonatomic, readonly) bool multichannel;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)activeClient;
- (void)activeClientDidChange:(id)arg1;
- (id)audioFormatApplication;
- (id)audioFormatContentInfo;
- (id)audioFormatDescription;
- (long long)bestAvailableAudioFormat;
- (id)bestAvailableAudioFormatDescription;
- (id)bundleID;
- (void)contentInfoDidChange:(id)arg1;
- (id)contentInfoForBundleID:(id)arg1 contentInfos:(id)arg2;
- (id)contentInfos;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)displayName;
- (id)displayNameForBundleID:(id)arg1;
- (id)firstEligibleContentInfoFor:(id)arg1;
- (id)foregroundBundleID;
- (bool)hasNowPlayingApp;
- (id)init;
- (bool)isEligibleForSpatialization;
- (bool)isMultichannel;
- (id)layoutMonitor;
- (id)queue;
- (void)setActiveClient:(id)arg1;
- (void)setContentInfos:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForegroundBundleID:(id)arg1;
- (void)setLayoutMonitor:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)updateActiveClient;
- (void)updateAudioFormatContentInfo;
- (void)updateDeprecatedApplication;
- (void)updateDeprecatedContentInfo;
- (void)updateForegroundBundleID;
- (void)updateSelectedContentInfo;

@end
