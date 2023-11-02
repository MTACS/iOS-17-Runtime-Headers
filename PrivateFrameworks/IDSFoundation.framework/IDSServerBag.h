
@interface IDSServerBag : NSObject {
    IDSServerBagConfig * _config;
    <IDSServerBagContentProvider> * _contentProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contentsLock;
    IDSServerBagLoadedContents * _loadedContents;
    NSMutableDictionary * _overrideValues;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) bool allRequiredBagCoalescingValuesPresent;
@property (nonatomic, readonly) bool allRequiredBagTTLValuesPresent;
@property (nonatomic, readonly) bool allowSelfSignedCertificates;
@property (nonatomic, readonly) bool allowUnsignedBags;
@property (nonatomic, readonly) NSString *apsEnvironmentName;
@property (nonatomic, readonly) bool bagKillSwitchActive;
@property (nonatomic, readonly) NSURL *bagURL;
@property (nonatomic, readonly) double coalesceDelayFromBag;
@property (nonatomic, readonly) double coalesceMaxPeriodFromBag;
@property (nonatomic, readonly) double coalescePeriodFromBag;
@property (nonatomic, retain) IDSServerBagConfig *config;
@property (nonatomic, retain) <IDSServerBagContentProvider> *contentProvider;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } contentsLock;
@property (nonatomic, readonly) bool isInDebilitatedMode;
@property (nonatomic, readonly) bool isLoaded;
@property (nonatomic, readonly) bool isLoading;
@property (nonatomic, readonly) bool isServerAvailable;
@property (nonatomic, retain) IDSServerBagLoadedContents *loadedContents;
@property (nonatomic, readonly) double messageTimeoutFromBag;
@property (nonatomic, readonly) NSNumber *minEnabledVersion;
@property (nonatomic, readonly) NSArray *nonCoalescingTopicsFromBag;
@property (nonatomic, retain) NSMutableDictionary *overrideValues;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) bool requiresIDSConnection;
@property (nonatomic, readonly) bool requiresIDSHost;
@property (nonatomic, readonly) long long ttlFromBag;
@property (nonatomic, readonly) long long ttlGracePeriodFromBag;
@property (nonatomic, readonly) long long ttlWindowFromBag;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

+ (id)_sharedCourierBag;
+ (id)_sharedIDSBag;
+ (id)sharedInstance;
+ (id)sharedInstanceForBagType:(long long)arg1;

- (void).cxx_destruct;
- (void)_clearOverrideValues;
- (id)_overrideValues;
- (void)_setOverrideValue:(id)arg1 forKey:(id)arg2;
- (bool)allowSelfSignedCertificates;
- (bool)allowUnsignedBags;
- (id)apsEnvironmentName;
- (id)bagURL;
- (id)config;
- (id)contentProvider;
- (struct os_unfair_lock_s { unsigned int x1; })contentsLock;
- (id)copyLoadedContents;
- (id)debugDescription;
- (id)description;
- (void)forceBagLoad;
- (id)init;
- (id)initWithConfig:(id)arg1 queue:(id)arg2;
- (id)initWithConfig:(id)arg1 queue:(id)arg2 contentProvider:(id)arg3;
- (bool)isInDebilitatedMode;
- (bool)isLoaded;
- (bool)isLoading;
- (bool)isServerAvailable;
- (id)loadedContents;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)overrideValues;
- (id)queue;
- (bool)requiresIDSConnection;
- (bool)requiresIDSHost;
- (void)setConfig:(id)arg1;
- (void)setContentProvider:(id)arg1;
- (void)setContentsLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setLoadedContents:(id)arg1;
- (void)setOverrideValues:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startBagLoad;
- (id)urlWithKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent

- (bool)_valuesDefinedAsNumbersInBagForKeys:(id)arg1;
- (bool)allRequiredBagCoalescingValuesPresent;
- (bool)allRequiredBagTTLValuesPresent;
- (bool)bagKillSwitchActive;
- (double)coalesceDelayFromBag;
- (double)coalesceMaxPeriodFromBag;
- (double)coalescePeriodFromBag;
- (double)messageTimeoutFromBag;
- (id)minEnabledVersion;
- (id)nonCoalescingTopicsFromBag;
- (bool)topicAvoidsCoalescing:(id)arg1;
- (long long)ttlFromBag;
- (long long)ttlFromDefault;
- (long long)ttlGracePeriodFromBag;
- (long long)ttlGracePeriodFromDefault;
- (long long)ttlWindowFromBag;
- (long long)ttlWindowFromDefault;

@end
