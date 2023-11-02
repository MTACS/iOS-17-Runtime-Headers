
@interface WFStaccatoActionTemplateParameter : NSObject <NSSecureCoding> {
    NSString * _actionIdentifier;
    WFStaccatoActionTemplateParameterValue * _defaultValue;
    NSString * _key;
    NSString * _localizedDescription;
    NSString * _localizedLabel;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, retain) WFStaccatoActionTemplateParameterValue *defaultValue;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedLabel;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 actionIdentifier:(id)arg2 localizedLabel:(id)arg3 localizedDescription:(id)arg4 defaultValue:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActionTemplateParameter:(id)arg1;
- (id)key;
- (id)localizedDescription;
- (id)localizedLabel;
- (void)setActionIdentifier:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedLabel:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)initWithLinkAction:(id)arg1 parameter:(id)arg2;

@end
