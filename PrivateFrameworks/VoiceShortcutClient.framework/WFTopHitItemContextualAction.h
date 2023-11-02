
@interface WFTopHitItemContextualAction : WFContextualAction <WFDisambiguableContextualAction> {
    <NSSecureCoding> * _item;
    WFAppShortcutNamedQueryInfo * _namedQueryInfo;
    unsigned long long  _primaryColor;
}

@property (nonatomic, readonly) <NSSecureCoding> *item;
@property (nonatomic, readonly) WFAppShortcutNamedQueryInfo *namedQueryInfo;
@property (nonatomic, readonly) unsigned long long primaryColor;

+ (id)actionForCallDescriptor:(id)arg1 namedQueryInfo:(id)arg2;
+ (id)availableCollectionIdentifiers;
+ (id)disambiguationAction;
+ (void)disambiguationEntriesForCollection:(id)arg1 limit:(long long)arg2 completionHandler:(id /* block */)arg3;
+ (id)disambiguationEntriesForCollection:(id)arg1 limit:(long long)arg2 error:(id*)arg3;
+ (id)disambiguationParameter;
+ (id)disambiguationSummaryStringForCollection:(id)arg1;
+ (id)disambiguationSummaryStringWithParameterDefined:(bool)arg1;
+ (void)getTopHitContextualActionsForType:(unsigned long long)arg1 limit:(long long)arg2 completion:(id /* block */)arg3;
+ (id)supportedBundleIdentifiers;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithItem:(id)arg1 identifier:(id)arg2 wfActionIdentifier:(id)arg3 associatedAppBundleIdentifier:(id)arg4 parameters:(id)arg5 displayFormatString:(id)arg6 title:(id)arg7 subtitleFormatString:(id)arg8 primaryColor:(unsigned long long)arg9 icon:(id)arg10 accessoryIcon:(id)arg11 namedQueryInfo:(id)arg12;
- (bool)isEqual:(id)arg1;
- (id)item;
- (id)namedQueryInfo;
- (unsigned long long)primaryColor;

@end
