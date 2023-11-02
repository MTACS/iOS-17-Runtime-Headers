
@interface SiriDirectActionContext : SiriContext {
    BBBulletin * _bulletin;
    UNNotification * _notification;
    NSDictionary * _payload;
}

@property (nonatomic, readonly) BBBulletin *bulletin;
@property (nonatomic, readonly) UNNotification *notification;
@property (nonatomic, readonly) NSDictionary *payload;

+ (id)appLaunchDirectActionWithAppBundleId:(id)arg1;
+ (id)mapSearchDirectActionWithAppBundleId:(id)arg1;
+ (id)mapShareEtaDirectActionWithAppBundleId:(id)arg1;
+ (id)messageAmbiguousDirectActionWithAppBundleId:(id)arg1;
+ (id)messageComposeDirectActionWithAppBundleId:(id)arg1;
+ (id)messageComposeNewThreadDirectActionWithAppBundleId:(id)arg1 fullName:(id)arg2 phoneOrEmailAddress:(id)arg3;
+ (id)messageReadDirectActionWithAppBundleId:(id)arg1 conversationGUID:(id)arg2;
+ (id)messageReplyDirectActionWithAppBundleId:(id)arg1 conversationGUID:(id)arg2;
+ (id)musicSearchDirectActionWithAppBundleId:(id)arg1;
+ (id)phoneAmbiguousDirectActionWithAppBundleId:(id)arg1;
+ (id)phoneCallDirectActionWithAppBundleId:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_directActionEventFromAppIdsAndIntentIdentifiersOfBulletin:(id)arg1 notification:(id)arg2;
- (long long)_directActionEventFromContentTypesOfBulletin:(id)arg1 notification:(id)arg2;
- (id)_initWithDirectActionEvent:(long long)arg1 appBundleId:(id)arg2 conversationGUID:(id)arg3 fullName:(id)arg4 phoneOrEmailAddress:(id)arg5;
- (id)_intentIdentifiersFromBulletin:(id)arg1 notification:(id)arg2;
- (id)bulletin;
- (id)bundleId;
- (id)description;
- (long long)directActionEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBBBulletin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)initWithUNNotification:(id)arg1;
- (id)notification;
- (id)payload;

@end
