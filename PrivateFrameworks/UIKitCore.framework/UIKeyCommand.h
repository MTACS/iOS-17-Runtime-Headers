
@interface UIKeyCommand : UICommand {
    long long  __enumerationPriority;
    BKSHIDEventDeferringEnvironment * __eventDeferringEnvironment;
    UIResponder * __originatingResponder;
    unsigned int  _allowGlobeModifier;
    unsigned int  _allowsAutomaticLocalization;
    unsigned int  _allowsAutomaticMirroring;
    unsigned int  _buttonType;
    unsigned int  _handleAfterKeyEvent;
    NSString * _input;
    unsigned int  _isInputSpecialkey;
    unsigned int  _isPlaceholder;
    NSIndexSet * _keyCodes;
    unsigned int  _lastKeyboardType;
    NSString * _lastLayout;
    NSString * _layoutAwareDisplayInputOverride;
    NSString * _layoutAwareInput;
    NSIndexSet * _layoutAwareKeyCodes;
    unsigned int  _layoutAwareModifierFlags;
    unsigned int  _modifierFlags;
    bool  _repeatable;
    UIEvent * _triggeringEvent;
    SEL  _upAction;
    unsigned int  _wantsPriorityOverSystemBehavior;
}

@property (nonatomic, readonly) long long _buttonType;
@property (setter=_setEnumerationPriority:, nonatomic) long long _enumerationPriority;
@property (setter=_setEventDeferringEnvironment:, nonatomic, retain) BKSHIDEventDeferringEnvironment *_eventDeferringEnvironment;
@property (nonatomic, readonly) bool _handleAfterKeyEvent;
@property (nonatomic, readonly) NSIndexSet *_keyCodes;
@property (nonatomic, retain) NSString *_layoutAwareDisplayInputOverride;
@property (nonatomic, readonly) NSString *_layoutAwareInput;
@property (nonatomic, readonly) NSIndexSet *_layoutAwareKeyCodes;
@property (nonatomic, readonly) long long _layoutAwareModifierFlags;
@property (setter=_setOriginatingResponder:, nonatomic) UIResponder *_originatingResponder;
@property (nonatomic, readonly) UIEvent *_triggeringEvent;
@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) bool allowGlobeModifier;
@property (nonatomic) bool allowsAutomaticLocalization;
@property (nonatomic) bool allowsAutomaticMirroring;
@property (nonatomic, readonly) NSArray *alternates;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic, readonly) NSString *discoverabilityInput;
@property (nonatomic, copy) NSString *discoverabilityTitle;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, readonly) id propertyList;
@property (nonatomic, readonly) bool repeatable;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) SEL upAction;
@property (nonatomic) bool wantsPriorityOverSystemBehavior;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5 propertyList:(id)arg6;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5 propertyList:(id)arg6 alternates:(id)arg7;
+ (id)commandWithTitle:(id)arg1 imageName:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5;
+ (id)keyCommandWithCompactInput:(id)arg1 action:(SEL)arg2 upAction:(SEL)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 upAction:(SEL)arg4;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 upAction:(SEL)arg4 discoverabilityTitle:(id)arg5;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3;
+ (id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
+ (id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4;
+ (id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
+ (id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_allowGlobeModifierKeyCommand;
- (bool)_allowsCommandKeyModifierElision;
- (long long)_buttonType;
- (struct __GSKeyboard { }*)_currentGSKeyboard;
- (long long)_defaultEnumerationPriority;
- (long long)_enumerationPriority;
- (id)_eventDeferringEnvironment;
- (bool)_handleAfterKeyEvent;
- (id)_immutableCopy;
- (id)_initWithInput:(id)arg1 modifierFlags:(long long)arg2 keyCodes:(id)arg3 action:(SEL)arg4 upAction:(SEL)arg5 discoverabilityTitle:(id)arg6 buttonType:(long long)arg7;
- (bool)_isDirectlyReachableWithTranslator:(id)arg1;
- (bool)_isKeyCommandLikelyMirrored;
- (bool)_isKeyCommandLocalized;
- (bool)_isLikelyToConflictWithTextInputForResponder:(id)arg1;
- (id)_keyCodes;
- (id)_keyCommandUsingAlternate:(id)arg1;
- (id)_layoutAwareDisplayInputOverride;
- (id)_layoutAwareInput;
- (id)_layoutAwareKeyCodes;
- (long long)_layoutAwareModifierFlags;
- (id)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (void)_localizeWithGSKeyboard:(struct __GSKeyboard { }*)arg1 automatically:(bool)arg2 force:(bool)arg3;
- (void)_markHandleAfterKeyEvent;
- (id)_mutableCopyIfNeeded;
- (id)_nonRepeatableKeyCommand;
- (id)_originatingResponder;
- (id)_placeholderKeyCommand;
- (id)_readableStringForInputUsingWords:(bool)arg1 forHUD:(bool)arg2 outIsSingleCharacterOrKeySymbol:(bool*)arg3;
- (id)_readableStringForModifierFlagsUsingWords:(bool)arg1 forHUD:(bool)arg2;
- (void)_setEnumerationPriority:(long long)arg1;
- (void)_setEventDeferringEnvironment:(id)arg1;
- (void)_setOriginatingResponder:(id)arg1;
- (void)_setTriggeringEvent:(id)arg1;
- (id)_triggeringEvent;
- (bool)allowGlobeModifier;
- (bool)allowsAutomaticLocalization;
- (bool)allowsAutomaticMirroring;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discoverabilityInput;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommand:(id)arg1;
- (id)initWithKeyCommand:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 action:(SEL)arg4 input:(id)arg5 modifierFlags:(long long)arg6 propertyList:(id)arg7 alternates:(id)arg8 discoverabilityTitle:(id)arg9 attributes:(unsigned long long)arg10 state:(long long)arg11;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 action:(SEL)arg4 propertyList:(id)arg5 alternates:(id)arg6 discoverabilityTitle:(id)arg7 attributes:(unsigned long long)arg8 state:(long long)arg9;
- (id)input;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceholder;
- (long long)modifierFlags;
- (id)nextResponder;
- (bool)repeatable;
- (void)setAllowsAutomaticLocalization:(bool)arg1;
- (void)setAllowsAutomaticMirroring:(bool)arg1;
- (void)setWantsPriorityOverSystemBehavior:(bool)arg1;
- (void)set_layoutAwareDisplayInputOverride:(id)arg1;
- (SEL)upAction;
- (bool)wantsPriorityOverSystemBehavior;

// Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager

- (id)_doc_erasedKeyCommandWithWrappedAction:(SEL)arg1;
- (bool)doc_isCancellingKeyCommand;
- (bool)doc_isDismissingKeyCommand;
- (bool)doc_isShortcutEqualToKeyCommand:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)ic_keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (id)smu_nonRepeatableCopy;

@end
