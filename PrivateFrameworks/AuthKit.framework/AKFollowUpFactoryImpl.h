
@interface AKFollowUpFactoryImpl : NSObject <AKFollowUpItemFactory> {
    NSString * _bundleIconName;
    NSString * _extensionIdentifier;
    NSString * _representingBundlePath;
}

@property (nonatomic, copy) NSString *bundleIconName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *representingBundlePath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)IsFollowUpItemNotificationForced:(id)arg1;
- (id)_actionFromInfo:(id)arg1 pushMessageInfo:(id)arg2;
- (id)_actionsFromPayload:(id)arg1 pushMessageInfo:(id)arg2;
- (id)_clearAction;
- (id)_itemFromPayload:(id)arg1 pushMessageInfo:(id)arg2 withAltDSID:(id)arg3;
- (id)_notificationFromPayload:(id)arg1 pushMessageInfo:(id)arg2;
- (id)actionWithTitle:(id)arg1 andActionKey:(id)arg2;
- (id)bundleIconName;
- (id)extensionIdentifier;
- (id)itemIdentifiersRequiringNotificationClearFromPayload:(id)arg1;
- (id)itemsForAltDSID:(id)arg1 pushMessageInfo:(id)arg2 fromIDMSPayload:(id)arg3;
- (id)representingBundlePath;
- (void)setBundleIconName:(id)arg1;
- (void)setExtensionIdentifier:(id)arg1;
- (void)setRepresentingBundlePath:(id)arg1;

@end
