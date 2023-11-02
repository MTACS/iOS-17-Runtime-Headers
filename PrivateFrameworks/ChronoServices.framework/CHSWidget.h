
@interface CHSWidget : NSObject <BSDescriptionProviding, BSXPCSecureCoding, CHSWidgetIdentifiable, CHSWidgetPersonality, NSCopying, NSSecureCoding> {
    NSString * _activityIdentifier;
    CHSExtensionIdentity * _extensionIdentity;
    long long  _family;
    CHSIntentReference * _intentReference;
    NSString * _kind;
}

@property (nonatomic, readonly, copy) NSString *activityIdentifier;
@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) CHSExtensionIdentity *extensionIdentity;
@property (nonatomic, readonly) long long family;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) CHSIntentReference *intentReference;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) NSString *sourceDeviceIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_loggingIdentifierWithMetrics:(id)arg1;
- (id)_loggingIdentifierWithMetrics:(id)arg1 prefix:(id)arg2;
- (id)_loggingIdentifierWithoutMetrics;
- (id)activityIdentifier;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (id)extensionIdentity;
- (long long)family;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 family:(long long)arg4 intent:(id)arg5;
- (id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 family:(long long)arg4 intent:(id)arg5 activityIdentifier:(id)arg6;
- (id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 family:(long long)arg3 intent:(id)arg4;
- (id)initWithExtensionIdentity:(id)arg1 kind:(id)arg2 family:(long long)arg3 intent:(id)arg4 activityIdentifier:(id)arg5;
- (id)initWithExtensionIdentity:(id)arg1 kind:(id)arg2 family:(long long)arg3 intentReference:(id)arg4 activityIdentifier:(id)arg5;
- (id)initWithPersonality:(id)arg1 family:(long long)arg2 intent:(id)arg3;
- (id)initWithWidgetIdentity:(id)arg1 family:(long long)arg2 intent:(id)arg3 activityIdentifier:(id)arg4;
- (id)intent;
- (id)intentReference;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (bool)matches:(id)arg1;
- (bool)matchesPersonality:(id)arg1;
- (id)sourceDeviceIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)widgetByReplacingIntent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

- (id)atxTimelineIdentifier;

@end
