
@interface PSSimStatusCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate> {
    CoreTelephonyClient * _coreTelephonyClient;
    CTXPCServiceSubscriptionContext * _currentDataSubscriptionContext;
    bool  _isAnySimPresent;
    NSMutableDictionary * _simHardwareTypeDict;
    NSMutableDictionary * _simStatusDict;
    CTXPCServiceSubscriptionInfo * _subscriptionInfo;
    CTXPCServiceSubscriptionContext * _userDefaultVoiceSubscriptionContext;
}

@property (nonatomic, retain) CoreTelephonyClient *coreTelephonyClient;
@property (retain) CTXPCServiceSubscriptionContext *currentDataSubscriptionContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnySimPresent;
@property (nonatomic, readonly) bool isDualSimCapable;
@property (nonatomic, readonly) bool isSIMMissing;
@property (retain) NSMutableDictionary *simHardwareTypeDict;
@property (retain) NSMutableDictionary *simStatusDict;
@property (copy) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (readonly) Class superclass;
@property (retain) CTXPCServiceSubscriptionContext *userDefaultVoiceSubscriptionContext;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)activeDataSubscriptionContext;
- (void)clearSimHardwareInfoCache;
- (void)clearSubscriptionContextCache;
- (id)coreTelephonyClient;
- (void)currentDataSimChanged:(id)arg1;
- (id)currentDataSubscriptionContext;
- (id)defaultVoiceSubscriptionContext;
- (void)fetchActiveDataSubscriptionContextIfNeeded;
- (void)fetchDefaultVoiceSubscriptionContextIfNeeded;
- (void)fetchSimHardwareInfo;
- (void)fetchSimStatus;
- (void)fetchSubscriptionContexts;
- (id)getLogger;
- (id)init;
- (id)initPrivate;
- (id)initWithCoreTelephonyClient:(id)arg1;
- (bool)isAnySimPresent;
- (bool)isDualSimCapable;
- (bool)isSIMMissing;
- (bool)isSlotActiveDataSlot:(long long)arg1;
- (void)preferredDataSimChanged:(id)arg1;
- (void)setCoreTelephonyClient:(id)arg1;
- (void)setCurrentDataSubscriptionContext:(id)arg1;
- (void)setIsAnySimPresent:(bool)arg1;
- (void)setSimHardwareTypeDict:(id)arg1;
- (void)setSimStatusDict:(id)arg1;
- (void)setSubscriptionInfo:(id)arg1;
- (void)setUserDefaultVoiceSubscriptionContext:(id)arg1;
- (long long)simHardwareInfo:(id)arg1;
- (id)simHardwareTypeDict;
- (id)simStatus:(id)arg1;
- (id)simStatusDict;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)subscriptionContexts;
- (id)subscriptionInfo;
- (void)subscriptionInfoDidChange;
- (id)subscriptionsInUse;
- (void)updateIsAnySimPresent;
- (id)userDefaultVoiceSubscriptionContext;
- (void)willEnterForeground;

@end
