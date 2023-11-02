
@interface SBSSystemNotesPresentationConfiguration : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    long long  _preferredPresentationMode;
    NSString * _sceneBundleIdentifier;
    NSUserActivity * _userActivity;
    NSData * _userActivityData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long preferredPresentationMode;
@property (nonatomic, readonly, copy) NSString *sceneBundleIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) NSData *userActivityData;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSceneBundleIdentifier:(id)arg1;
- (id)initWithSceneBundleIdentifier:(id)arg1 userActivity:(id)arg2;
- (id)initWithSceneBundleIdentifier:(id)arg1 userActivity:(id)arg2 preferredPresentationMode:(long long)arg3;
- (id)initWithSceneBundleIdentifier:(id)arg1 userActivity:(id)arg2 preferredPresentationMode:(long long)arg3 identifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSystemNotesPresentationConfiguration:(id)arg1;
- (long long)preferredPresentationMode;
- (void)prepareForXPCCall:(id /* block */)arg1;
- (id)presentationConfigurationWithPreferredPresentationMode:(long long)arg1;
- (id)sceneBundleIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userActivity;
- (id)userActivityData;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (id)_uiActivityContinuationAction;

@end
