
@interface INSendAnnouncementIntent : INIntent <INSendAnnouncementIntentExport>

@property (nonatomic, readonly, copy) INAnnouncement *announcement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *isReply;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (nonatomic, copy) NSString *sharedUserID;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (long long)_preferredInteractionDirection;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)announcement;
- (id)domain;
- (id)initWithAnnouncement:(id)arg1 recipients:(id)arg2 isReply:(id)arg3 sharedUserID:(id)arg4;
- (id)isReply;
- (id)parametersByName;
- (id)recipients;
- (void)setAnnouncement:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setIsReply:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSharedUserID:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)sharedUserID;
- (id)verb;

@end
