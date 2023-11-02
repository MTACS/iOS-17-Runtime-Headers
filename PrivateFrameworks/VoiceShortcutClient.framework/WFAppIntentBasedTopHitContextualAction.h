
@interface WFAppIntentBasedTopHitContextualAction : WFTopHitItemContextualAction {
    NSString * _appBundleIdentifier;
    long long  _authenticationPolicy;
    NSString * _extensionBundleIdentifier;
    LNAction * _linkAction;
    LNProperty * _parameterValue;
}

@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly) long long authenticationPolicy;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) LNAction *linkAction;
@property (nonatomic, readonly) LNProperty *parameterValue;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (long long)authenticationPolicy;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (unsigned long long)hash;
- (id)initWithAction:(id)arg1 appBundleIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 authenticationPolicy:(long long)arg4 associatedAppBundleIdentifier:(id)arg5 parameterValue:(id)arg6 displayFormatString:(id)arg7 title:(id)arg8 subtitleFormatString:(id)arg9 primaryColor:(unsigned long long)arg10 icon:(id)arg11 accessoryIcon:(id)arg12 namedQueryInfo:(id)arg13;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)linkAction;
- (id)parameterValue;
- (bool)showsUserInterfaceWhenRunning;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)_getActionRepresentationTakingInput:(void *)arg1 context:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 42: bool, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, long, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
