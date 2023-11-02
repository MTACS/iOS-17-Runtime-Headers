
@interface INReadAnnouncementIntent : INIntent <INReadAnnouncementIntentExport, UNNotificationContentProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long readType;
@property (nonatomic, readonly, copy) NSString *startAnnouncementIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long userNotificationType;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithReadType:(long long)arg1 startAnnouncementIdentifier:(id)arg2 userNotificationType:(long long)arg3;
- (id)parametersByName;
- (long long)readType;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setReadType:(long long)arg1;
- (void)setStartAnnouncementIdentifier:(id)arg1;
- (void)setUserNotificationType:(long long)arg1;
- (void)setVerb:(id)arg1;
- (id)startAnnouncementIdentifier;
- (long long)userNotificationType;
- (id)verb;

@end
