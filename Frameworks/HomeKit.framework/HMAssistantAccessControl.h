
@interface HMAssistantAccessControl : HMAccessControl <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSSet * _accessories;
    bool  _activityNotificationsEnabledForPersonalRequests;
    bool  _enabled;
    unsigned long long  _options;
}

@property (readonly, copy) NSArray *accessories;
@property (getter=areActivityNotificationsEnabledForPersonalRequests, readonly) bool activityNotificationsEnabledForPersonalRequests;
@property (readonly) bool allowUnauthenticatedRequests;
@property (getter=isEnabled, readonly) bool enabled;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)isAccessorySupported:(id)arg1;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessories;
- (bool)allowUnauthenticatedRequests;
- (bool)areActivityNotificationsEnabledForPersonalRequests;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)options;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (bool)hf_effectivelyEnabledForSupportedVoiceRecognitionLanguages:(id)arg1 currentUserIsOwner:(bool)arg2;

@end
