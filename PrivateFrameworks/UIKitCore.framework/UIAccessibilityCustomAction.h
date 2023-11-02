
@interface UIAccessibilityCustomAction : NSObject {
    id /* block */  _actionHandler;
    NSAttributedString * _attributedName;
    UIImage * _image;
    SEL  _selector;
    id  _target;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic) struct CGPoint { double x1; double x2; } activationPoint;
@property (nonatomic, copy) NSAttributedString *attributedName;
@property (nonatomic) bool ignoreWhenVoiceOverTouches;
@property (nonatomic, retain) UIImage *image;
@property (getter=_accessibilityInternalCustomActionIdentifier, setter=_accessibilitySetInternalCustomActionIdentifier:, nonatomic, retain) NSString *internalCustomActionIdentifier;
@property (nonatomic, retain) NSString *localizedActionRotorCategory;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) SEL selector;
@property (getter=_shortName, setter=_setShortName:, nonatomic, retain) NSString *shortName;
@property (nonatomic) bool shouldPersistActionMenu;
@property (nonatomic) bool shouldSuppressActionHint;
@property (nonatomic) unsigned long long sortPriority;
@property (nonatomic) id target;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (id)attributedName;
- (id)image;
- (id)init;
- (id)initWithAttributedName:(id)arg1 actionHandler:(id /* block */)arg2;
- (id)initWithAttributedName:(id)arg1 image:(id)arg2 actionHandler:(id /* block */)arg3;
- (id)initWithAttributedName:(id)arg1 image:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)initWithAttributedName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)initWithName:(id)arg1 actionHandler:(id /* block */)arg2;
- (id)initWithName:(id)arg1 image:(id)arg2 actionHandler:(id /* block */)arg3;
- (id)initWithName:(id)arg1 image:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)name;
- (SEL)selector;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setAttributedName:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

- (id)init;
- (id)initWithName:(id)arg1;
- (void)tmlSignalAttach:(id)arg1;
- (void)tmlSignalDetach:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)_accessibilityAXAttributedName;
- (id)_accessibilityCustomActionIdentifier;
- (id)_accessibilityInternalCustomActionIdentifier;
- (bool)_accessibilityMatchesCustomActionIdentifier:(id)arg1;
- (void)_accessibilitySetInternalCustomActionIdentifier:(id)arg1;
- (void)_setShortName:(id)arg1;
- (id)_shortName;
- (struct CGPoint { double x1; double x2; })activationPoint;
- (bool)ignoreWhenVoiceOverTouches;
- (id)localizedActionRotorCategory;
- (void)setActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIgnoreWhenVoiceOverTouches:(bool)arg1;
- (void)setLocalizedActionRotorCategory:(id)arg1;
- (void)setShouldPersistActionMenu:(bool)arg1;
- (void)setShouldSuppressActionHint:(bool)arg1;
- (void)setSortPriority:(unsigned long long)arg1;
- (bool)shouldPersistActionMenu;
- (bool)shouldSuppressActionHint;
- (unsigned long long)sortPriority;

@end
