
@interface WFAutoShortcutContextualAction : WFContextualAction {
    NSString * _actionIdentifier;
    NSArray * _alternativePhrases;
    LNAutoShortcut * _autoShortcut;
    NSString * _bundleIdentifier;
    NSNumber * _cachedProminentDisplayEligibility;
    unsigned long long  _orderOfShortcut;
    WFAutoShortcutContextualAction * _parentAction;
    LNAutoShortcutLocalizedPhrase * _phrase;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly, copy) NSArray *alternativePhrases;
@property (nonatomic, readonly) LNAutoShortcut *autoShortcut;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSNumber *cachedProminentDisplayEligibility;
@property (getter=isEligibleForProminentDisplay, nonatomic, readonly) bool eligibleForProminentDisplay;
@property (nonatomic, readonly) unsigned long long orderOfShortcut;
@property (nonatomic, readonly) WFAutoShortcutContextualAction *parentAction;
@property (nonatomic, readonly) LNAutoShortcutLocalizedPhrase *phrase;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)allActionsForAutoShortcut:(id)arg1 bundleIdentifier:(id)arg2 startIndex:(unsigned long long)arg3;
+ (id)autoShortcutContextualActionsByQueryingEligibilityForProminentDisplay:(id)arg1;
+ (id)spotlightDomainIdentifier;
+ (id)spotlightDomainIdentifierForBundleIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionBySettingEligibilityForProminentDisplay:(bool)arg1;
- (id)actionForRunningFromSpotlight;
- (id)actionIdentifier;
- (id)alternativePhrases;
- (id)autoShortcut;
- (id)bundleIdentifier;
- (id)cachedProminentDisplayEligibility;
- (id)creationDate;
- (bool)definesDisplayOrder;
- (unsigned long long)displayOrder;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAutoShortcut:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithAutoShortcut:(id)arg1 identifier:(id)arg2 phrase:(id)arg3 alternativePhrases:(id)arg4 bundleIdentifier:(id)arg5 actionIdentifier:(id)arg6 orderOfShortcut:(unsigned long long)arg7 parentAction:(id)arg8 prominentDisplayEligibility:(id)arg9;
- (id)initWithAutoShortcut:(id)arg1 phrase:(id)arg2 alternativePhrases:(id)arg3 bundleIdentifier:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEligibleForProminentDisplay;
- (bool)isEqual:(id)arg1;
- (unsigned long long)orderOfShortcut;
- (id)parentAction;
- (id)phrase;
- (id)relatedApp;
- (id)spotlightItem;
- (void)wf_launchAppIfNeededUsingSurface:(unsigned long long)arg1;
- (id)workflowRunKind;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (void)generateSearchableItemWithCompletionBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)_getActionRepresentationTakingInput:(void *)arg1 context:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 42: bool, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, long, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
