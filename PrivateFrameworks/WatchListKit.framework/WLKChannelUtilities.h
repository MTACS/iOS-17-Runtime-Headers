
@interface WLKChannelUtilities : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    WLKChannelsResponse * _cachedResponse;
    NSDictionary * _channelsByBundleID;
    NSError * _error;
    bool  _filtered;
    NSMutableArray * _inFlightcompletionList;
    bool  _isChannelsInProgress;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _shouldRefresh;
    int  _shouldRefreshNotificationToken;
}

@property (nonatomic, readonly, copy) NSDictionary *channelsByBundleID;
@property (nonatomic, readonly, copy) NSDictionary *channelsByID;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool loaded;
@property (nonatomic, readonly, copy) NSArray *orderedChannels;

+ (id)_validiTunesBundles;
+ (bool)isItunesBundleID:(id)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceFiltered;

- (void).cxx_destruct;
- (id)_configuration;
- (void)_loadConfigIfNeededWithCompletion:(id /* block */)arg1;
- (id)channelForBundleID:(id)arg1;
- (id)channelForID:(id)arg1;
- (id)channelIDForBundleID:(id)arg1;
- (id)channelsByBundleID;
- (id)channelsByID;
- (void)dealloc;
- (id)error;
- (id)init;
- (id)initFiltered:(bool)arg1;
- (void)invalidateCache;
- (bool)isItunesOrFirstPartyBundleID:(id)arg1;
- (void)loadIfNeededWithCompletion:(id /* block */)arg1;
- (bool)loaded;
- (id)orderedChannels;
- (void)updateConsentStatusForCachedEntry:(id)arg1 consented:(bool)arg2;

@end
