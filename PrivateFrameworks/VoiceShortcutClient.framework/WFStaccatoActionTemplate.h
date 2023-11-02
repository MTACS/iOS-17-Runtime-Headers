
@interface WFStaccatoActionTemplate : NSObject <NSSecureCoding> {
    NSString * _actionIdentifier;
    NSString * _identifier;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    NSArray * _parameters;
    NSString * _sectionIdentifier;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, retain) NSArray *parameters;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sectionIdentifier:(id)arg2 actionIdentifier:(id)arg3 localizedTitle:(id)arg4 localizedDescription:(id)arg5 parameters:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActionTemplate:(id)arg1;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)parameters;
- (id)sectionIdentifier;
- (void)setActionIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setParameters:(id)arg1;
- (id)tintColor;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)initWithIdentifier:(id)arg1 sectionIdentifier:(id)arg2 linkAction:(id)arg3;

@end
