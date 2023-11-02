
@interface WFExecutableAppShortcutIdentifier : NSObject <NSSecureCoding> {
    NSString * _actionIdentifier;
    NSString * _basePhraseTemplate;
    NSString * _bundleIdentifier;
    NSUUID * _parameterIdentifier;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly, copy) NSString *basePhraseTemplate;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly, copy) NSUUID *parameterIdentifier;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)basePhraseTemplate;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 basePhraseTemplate:(id)arg2 actionIdentifier:(id)arg3 parameterIdentifier:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)parameterIdentifier;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)description;

@end
