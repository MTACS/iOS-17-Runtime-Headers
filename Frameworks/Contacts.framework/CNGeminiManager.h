
@interface CNGeminiManager : NSObject <CoreTelephonyClientDelegate, TUCallProviderManagerDelegate> {
    TUCallProviderManager * _callProviderManager;
    CoreTelephonyClient * _coreTelephonyClient;
    unsigned long long  _dataSourceExclusions;
    NSMapTable * _delegateToQueue;
    CNContactsEnvironment * _environment;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) unsigned long long dataSourceExclusions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)channelStringFromSenderIdentity:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (bool)deviceSupportsGemini;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)badgeLabelForSenderIdentity:(id)arg1 error:(id*)arg2;
- (id)badgeLabelForSubscription:(id)arg1 error:(id*)arg2;
- (id)bestSenderIdentityForContact:(id)arg1 error:(id*)arg2;
- (id)bestSenderIdentityForFavoritesEntry:(id)arg1 error:(id*)arg2;
- (id)bestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3;
- (id)bestSubscriptionForContact:(id)arg1 error:(id*)arg2;
- (id)bestSubscriptionForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3;
- (id)channelForContact:(id)arg1 error:(id*)arg2;
- (id)channelForFavoritesEntry:(id)arg1 error:(id*)arg2;
- (void)danglingPlansDidUpdate:(id)arg1;
- (unsigned long long)dataSourceExclusions;
- (id)fetchedSenderIdentitiesWithError:(id*)arg1;
- (id)geminiResultForContact:(id)arg1 error:(id*)arg2;
- (id)geminiResultForContact:(id)arg1 substituteDefaultForDangling:(bool)arg2 error:(id*)arg3;
- (id)geminiResultForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithCallProviderManager:(id)arg1;
- (id)initWithEnvironment:(id)arg1 coreTelephonyClient:(id)arg2 callProviderManager:(id)arg3;
- (bool)isReferencedByContactsForSenderLabelIdentifier:(id)arg1 store:(id)arg2;
- (void)providersChangedForProviderManager:(id)arg1;
- (bool)remapChannelIdentifier:(id)arg1 toIdentifier:(id)arg2 error:(id*)arg3;
- (bool)remapContactsHavingPreferredChannelIdentifier:(id)arg1 toPreferredChannelIdentifier:(id)arg2 contactStore:(id)arg3 error:(id*)arg4;
- (id)remoteBestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3;
- (id)remoteGeminiResultForContact:(id)arg1 substituteDefaultForDangling:(bool)arg2 error:(id*)arg3;
- (void)removeDelegate:(id)arg1;
- (void)setDataSourceExclusions:(unsigned long long)arg1;
- (void)subscriptionInfoDidChange;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)badgeForSenderIdentity:(id)arg1;
+ (id)badgeForSubscription:(id)arg1;
+ (id)badgeForText:(id)arg1;

@end
