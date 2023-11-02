
@interface LNAutoShortcutMetadata : NSObject <NSSecureCoding> {
    NSString * _actionIdentifier;
    LNStaticDeferredLocalizedString * _autoShortcutDescription;
    LNAppShortcutParameterPresentationMetadata * _parameterPresentation;
    NSArray * _phraseTemplates;
    LNStaticDeferredLocalizedString * _shortTitle;
    NSString * _systemImageName;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *autoShortcutDescription;
@property (nonatomic, readonly, copy) LNAppShortcutParameterPresentationMetadata *parameterPresentation;
@property (nonatomic, readonly, copy) NSArray *phraseTemplates;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *shortTitle;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)autoShortcutDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActionIdentifier:(id)arg1 phraseTemplates:(id)arg2 shortTitle:(id)arg3 autoShortcutDescription:(id)arg4 systemImageName:(id)arg5;
- (id)initWithActionIdentifier:(id)arg1 phraseTemplates:(id)arg2 shortTitle:(id)arg3 autoShortcutDescription:(id)arg4 systemImageName:(id)arg5 parameterPresentation:(id)arg6;
- (id)initWithActionIdentifier:(id)arg1 phraseTemplates:(id)arg2 title:(id)arg3 shortTitle:(id)arg4 autoShortcutDescription:(id)arg5 systemImageName:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)parameterPresentation;
- (id)phraseTemplates;
- (id)shortTitle;
- (id)systemImageName;
- (id)title;

@end
