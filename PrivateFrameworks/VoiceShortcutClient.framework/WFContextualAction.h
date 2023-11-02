
@interface WFContextualAction : NSObject <NSSecureCoding, WFCSSearchableItemConvertible, WFSpotlightResultRunnable> {
    WFContextualActionIcon * _accessoryIcon;
    bool  _actionShowsUserInterface;
    bool  _alternate;
    NSString * _associatedAppBundleIdentifier;
    unsigned long long  _correspondingSystemActionType;
    NSString * _displayFormatString;
    WFContextualActionFilteringBehavior * _filteringBehavior;
    WFContextualActionIcon * _icon;
    NSString * _identifier;
    NSArray * _parameters;
    long long  _resultFileOperation;
    bool  _reversible;
    NSString * _subtitleFormatString;
    NSString * _title;
    unsigned long long  _type;
    NSString * _wfActionIdentifier;
}

@property (nonatomic, readonly) WFContextualActionIcon *accessoryIcon;
@property (nonatomic, readonly) WFContextualAction *actionForRunningFromSpotlight;
@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly) bool actionShowsUserInterface;
@property (getter=isAlternate, nonatomic, readonly) bool alternate;
@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, readonly) unsigned long long correspondingSystemActionType;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool definesDisplayOrder;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayFormatString;
@property (nonatomic, readonly) unsigned long long displayOrder;
@property (nonatomic, readonly, copy) NSString *displayString;
@property (nonatomic, readonly) WFContextualActionFilteringBehavior *filteringBehavior;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFContextualActionIcon *icon;
@property (nonatomic, readonly, copy) NSData *iconImageData;
@property (nonatomic, readonly) double iconImageScale;
@property (nonatomic, readonly, copy) NSString *iconSymbolName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) bool outputsFiles;
@property (nonatomic, readonly) NSArray *parameters;
@property (nonatomic, readonly) long long resultFileOperation;
@property (getter=isReversible, nonatomic, readonly) bool reversible;
@property (nonatomic, readonly) bool selfPopulatesInput;
@property (nonatomic, readonly) bool showsUserInterfaceWhenRunning;
@property (nonatomic, readonly) CSSearchableItem *spotlightItem;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *subtitleFormatString;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *wfActionIdentifier;
@property (nonatomic, readonly) NSString *workflowRunKind;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)spotlightDomainIdentifier;
+ (bool)supportsSecureCoding;
+ (id)systemActionWithType:(unsigned long long)arg1 identifier:(id)arg2 displayString:(id)arg3 inputTypes:(id)arg4;

- (void).cxx_destruct;
- (id)accessoryIcon;
- (id)actionForRunningFromSpotlight;
- (id)actionIdentifier;
- (bool)actionShowsUserInterface;
- (id)associatedAppBundleIdentifier;
- (id)associatedSettingsPreference;
- (void)configureIfNeededForContext:(id)arg1 completion:(id /* block */)arg2;
- (id)contextForSurface:(unsigned long long)arg1;
- (id)copyWithParameters:(id)arg1;
- (unsigned long long)correspondingSystemActionType;
- (id)creationDate;
- (bool)definesDisplayOrder;
- (id)description;
- (id)displayFormatString;
- (unsigned long long)displayOrder;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (id)filteringBehavior;
- (unsigned long long)hash;
- (id)icon;
- (id)iconImageData;
- (double)iconImageScale;
- (id)iconSymbolName;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 wfActionIdentifier:(id)arg2 associatedAppBundleIdentifier:(id)arg3 parameters:(id)arg4 displayFormatString:(id)arg5 title:(id)arg6 subtitleFormatString:(id)arg7 icon:(id)arg8;
- (id)initWithIdentifier:(id)arg1 wfActionIdentifier:(id)arg2 associatedAppBundleIdentifier:(id)arg3 parameters:(id)arg4 displayFormatString:(id)arg5 title:(id)arg6 subtitleFormatString:(id)arg7 icon:(id)arg8 accessoryIcon:(id)arg9 actionShowsUserInterface:(bool)arg10 actionHasResult:(bool)arg11 isReversible:(bool)arg12;
- (id)initWithIdentifier:(id)arg1 wfActionIdentifier:(id)arg2 type:(unsigned long long)arg3 correspondingSystemActionType:(unsigned long long)arg4 associatedAppBundleIdentifier:(id)arg5 resultFileOperation:(long long)arg6 alternate:(bool)arg7 filteringBehavior:(id)arg8 parameters:(id)arg9 displayFormatString:(id)arg10 title:(id)arg11 subtitleFormatString:(id)arg12 icon:(id)arg13;
- (id)initWithIdentifier:(id)arg1 wfActionIdentifier:(id)arg2 type:(unsigned long long)arg3 correspondingSystemActionType:(unsigned long long)arg4 associatedAppBundleIdentifier:(id)arg5 resultFileOperation:(long long)arg6 alternate:(bool)arg7 filteringBehavior:(id)arg8 parameters:(id)arg9 displayFormatString:(id)arg10 title:(id)arg11 subtitleFormatString:(id)arg12 icon:(id)arg13 accessoryIcon:(id)arg14 actionShowsUserInterface:(bool)arg15 isReversible:(bool)arg16;
- (bool)isAlternate;
- (bool)isEqual:(id)arg1;
- (bool)isReversible;
- (id)modificationDate;
- (bool)outputsFiles;
- (id)parameterDisplayStrings;
- (id)parameters;
- (long long)resultFileOperation;
- (id)runDescriptorForSurface:(unsigned long long)arg1;
- (id)runRequestForSurface:(unsigned long long)arg1;
- (id)settingBiomeStreamIdentifier;
- (bool)showsUserInterfaceWhenRunning;
- (id)spotlightItem;
- (id)subtitle;
- (id)subtitleFormatString;
- (id)title;
- (unsigned long long)type;
- (id)uniqueIdentifier;
- (id)wfActionIdentifier;
- (void)wf_launchAppIfNeededUsingSurface:(unsigned long long)arg1;
- (void)wf_launchAppIfNeededUsingSurface:(unsigned long long)arg1 linkAction:(id)arg2 appBundleIdentifier:(id)arg3 actionIdentifier:(id)arg4;
- (bool)wf_shouldLaunchApWithSurface:(unsigned long long)arg1 linkAction:(id)arg2 actionMetadata:(id)arg3 appBundleIdentifier:(id)arg4 actionIdentifier:(id)arg5;
- (id)workflowRunKind;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (void)generateSearchableItemWithCompletionBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)_getActionRepresentationTakingInput:(void *)arg1 context:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 42: bool, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, long, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)getActionRepresentationTakingInput:(bool)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getInputWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 26: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (bool)selfPopulatesInput;

@end
