
@interface WFConfiguredStaccatoIntentAction : WFConfiguredStaccatoAction {
    WFExecutableAppShortcutIdentifier * _appShortcutIdentifier;
    NSArray * _contextualParameters;
    INAppIntent * _intent;
    NSDictionary * _templateParameterValues;
}

@property (nonatomic, readonly) WFExecutableAppShortcutIdentifier *appShortcutIdentifier;
@property (nonatomic, readonly) NSArray *contextualParameters;
@property (nonatomic, readonly) INAppIntent *intent;
@property (nonatomic, readonly) NSDictionary *templateParameterValues;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appShortcutIdentifier;
- (id)contextualParameters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 named:(id)arg2 systemImageName:(id)arg3;
- (id)initWithIntent:(id)arg1 sectionIdentifier:(id)arg2 named:(id)arg3 appShortcutIdentifier:(id)arg4 systemImageName:(id)arg5 templateParameterValues:(id)arg6 contextualParameters:(id)arg7 shortcutsMetadata:(id)arg8;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (id)previewIcon;
- (id)templateParameterValues;

@end
