
@interface INShortcut : NSObject <INImageProxyInjecting, INKeyImageProducing, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, REShortcutProperties> {
    NSString * _activityBundleIdentifier;
    NSData * _activityData;
    INImage * _activityImage;
    NSString * _activitySubtitle;
    INIntent * _intent;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly) NSString *_associatedAppBundleIdentifier;
@property (readonly) INImage *_keyImage;
@property (nonatomic, readonly) NSString *_subtitle;
@property (nonatomic, readonly) NSString *_title;
@property (nonatomic, readonly, copy) NSString *activityBundleIdentifier;
@property (nonatomic, readonly, copy) NSData *activityData;
@property (nonatomic, readonly, copy) INImage *activityImage;
@property (nonatomic, readonly, copy) NSString *activitySubtitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly, copy) INIntent *intent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) unsigned long long wf_shortcutAvailability;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (bool)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)_associatedAppBundleIdentifier;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_initWithIntent:(id)arg1;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_keyImage;
- (id)_subtitle;
- (id)_title;
- (id)activityBundleIdentifier;
- (id)activityData;
- (id)activityImage;
- (id)activitySubtitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActivityData:(id)arg1 activityImage:(id)arg2 activitySubtitle:(id)arg3 activityBundleIdentifier:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithUserActivity:(id)arg1 bundleIdentifier:(id)arg2;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)shortcutWithActivityBundleIdentifier:(id)arg1;
- (id)shortcutWithActivityImage:(id)arg1;
- (id)userActivity;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (unsigned long long)wf_shortcutAvailability;

@end
