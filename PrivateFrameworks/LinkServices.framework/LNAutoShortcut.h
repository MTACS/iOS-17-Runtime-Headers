
@interface LNAutoShortcut : NSObject <NSSecureCoding> {
    NSString * _actionIdentifier;
    NSString * _attributionBundleIdentifier;
    NSArray * _basePhraseTemplates;
    NSString * _bundleIdentifier;
    NSString * _localeIdentifier;
    NSString * _localizedActionDescription;
    NSString * _localizedAutoShortcutDescription;
    NSString * _localizedShortTitle;
    NSString * _localizedTitle;
    NSArray * _orderedPhrases;
    LNAppShortcutParameterPresentation * _parameterPresentation;
    long long  _shortcutTileColor;
    NSString * _systemImageName;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly, copy) NSString *attributionBundleIdentifier;
@property (nonatomic, readonly, copy) NSArray *basePhraseTemplates;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *localeIdentifier;
@property (nonatomic, readonly, copy) NSString *localizedActionDescription;
@property (nonatomic, readonly, copy) NSString *localizedAutoShortcutDescription;
@property (nonatomic, readonly, copy) NSArray *localizedPhrases;
@property (nonatomic, readonly, copy) NSDictionary *localizedPhrasesByBasePhraseTemplate;
@property (nonatomic, readonly, copy) NSString *localizedShortTitle;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) NSArray *orderedPhrases;
@property (nonatomic, readonly) LNAppShortcutParameterPresentation *parameterPresentation;
@property (nonatomic, readonly) long long shortcutTileColor;
@property (nonatomic, readonly, copy) NSString *systemImage;
@property (nonatomic, readonly, copy) NSString *systemImageName;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)attributionBundleIdentifier;
- (id)basePhraseTemplates;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 actionIdentifier:(id)arg2 localizedPhrases:(id)arg3 localizedTitle:(id)arg4 localizedShortTitle:(id)arg5 localizedAutoShortcutDescription:(id)arg6 systemImageName:(id)arg7;
- (id)initWithBundleIdentifier:(id)arg1 localeIdentifier:(id)arg2 actionIdentifier:(id)arg3 orderedPhrases:(id)arg4 localizedShortTitle:(id)arg5 localizedAutoShortcutDescription:(id)arg6 systemImageName:(id)arg7;
- (id)initWithBundleIdentifier:(id)arg1 localeIdentifier:(id)arg2 actionIdentifier:(id)arg3 orderedPhrases:(id)arg4 localizedShortTitle:(id)arg5 localizedAutoShortcutDescription:(id)arg6 systemImageName:(id)arg7 shortcutTileColor:(long long)arg8;
- (id)initWithBundleIdentifier:(id)arg1 localeIdentifier:(id)arg2 actionIdentifier:(id)arg3 orderedPhrases:(id)arg4 localizedShortTitle:(id)arg5 localizedAutoShortcutDescription:(id)arg6 systemImageName:(id)arg7 shortcutTileColor:(long long)arg8 parameterPresentation:(id)arg9;
- (id)initWithBundleIdentifier:(id)arg1 localeIdentifier:(id)arg2 actionIdentifier:(id)arg3 orderedPhrases:(id)arg4 localizedShortTitle:(id)arg5 localizedAutoShortcutDescription:(id)arg6 systemImageName:(id)arg7 shortcutTileColor:(long long)arg8 parameterPresentation:(id)arg9 attributionBundleIdentifier:(id)arg10 basePhraseTemplates:(id)arg11;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1 localizedApplicationName:(id)arg2 basePhraseTemplateSubstitutions:(id)arg3 actionIdentifier:(id)arg4 phraseTemplates:(id)arg5 title:(id)arg6 shortTitle:(id)arg7 actionDescription:(id)arg8 systemImage:(id)arg9;
- (id)localeIdentifier;
- (id)localizedActionDescription;
- (id)localizedAutoShortcutDescription;
- (id)localizedPhrases;
- (id)localizedPhrasesByBasePhraseTemplate;
- (id)localizedShortTitle;
- (id)localizedTitle;
- (id)orderedPhrases;
- (id)parameterPresentation;
- (long long)shortcutTileColor;
- (id)systemImage;
- (id)systemImageName;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (id)parameterOverrides;

- (id)actionParameterIdentifier;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (id)allGroupedPhrases;
- (id)parameterGroups;
- (id)parameterlessPhrases;
- (id)primaryPhrases;

@end
