
@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate> {
    <TUCallProviderManagerDataSource> * _dataSource;
    NSMapTable * _delegateToQueue;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _type;
}

@property (nonatomic, readonly) <TUCallProviderManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) TUCallProvider *defaultProvider;
@property (nonatomic, retain) NSMapTable *delegateToQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TUCallProvider *emergencyProvider;
@property (nonatomic, readonly) TUCallProvider *faceTimeProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *providers;
@property (nonatomic, readonly, copy) NSDictionary *providersByIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) TUCallProvider *superboxProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TUCallProvider *telephonyProvider;
@property (nonatomic, readonly) TUCallProvider *tinCanProvider;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) TUCallProvider *voicemailProvider;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)defaultProviders;
+ (int)serviceForProvider:(id)arg1 video:(bool)arg2;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)debugDescription;
- (id)defaultProvider;
- (id)delegateToQueue;
- (id)dialRequestForRecentCall:(id)arg1;
- (void)donateUserIntentForProviderWithIdentifier:(id)arg1;
- (id)emergencyProvider;
- (id)faceTimeProvider;
- (id)init;
- (id)initWithDataSource:(id)arg1 type:(unsigned long long)arg2 queue:(id)arg3;
- (id)initWithLocalProviders;
- (id)initWithPairedHostDeviceProviders;
- (id)initWithType:(unsigned long long)arg1;
- (void)launchAppForDialRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)providerForFavoritesEntry:(id)arg1;
- (id)providerForFavoritesEntryActionBundleIdentifier:(id)arg1;
- (id)providerForRecentCall:(id)arg1;
- (id)providerWithIdentifier:(id)arg1;
- (id)providerWithService:(int)arg1 video:(bool*)arg2;
- (id)providers;
- (id)providersByIdentifier;
- (void)providersChangedForDataSource:(id)arg1;
- (id)providersPassingTest:(id /* block */)arg1;
- (id)queue;
- (void)removeDelegate:(id)arg1;
- (void)setDelegateToQueue:(id)arg1;
- (id)superboxProvider;
- (id)telephonyProvider;
- (id)tinCanProvider;
- (unsigned long long)type;
- (id)voicemailProvider;

// Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC

+ (id)nph_localProviderManager;
+ (id)nph_pairedHostDeviceProviderManager;

@end
