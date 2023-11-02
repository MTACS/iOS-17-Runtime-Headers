
@interface UICommand : UIMenuElement <UIMenuLeaf, _UIMenuLeaf, _UIMenuStateObserverableLeaf> {
    id  __target;
    bool  __useSenderForResolvingTarget;
    SEL  _action;
    NSArray * _alternates;
    unsigned int  _attributes;
    NSString * _discoverabilityTitle;
    id  _propertyList;
    UIImage * _selectedImage;
    id  _sender;
    unsigned int  _state;
    NSPointerArray * stateObservers;
}

@property (nonatomic, readonly) id _target;
@property (nonatomic) bool _useSenderForResolvingTarget;
@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) NSArray *alternates;
@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic) unsigned long long attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *discoverabilityTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, readonly) bool keepsMenuPresented;
@property (nonatomic, readonly) <UIPopoverPresentationControllerSourceItem> *presentationSourceItem;
@property (nonatomic, readonly) id propertyList;
@property (nonatomic, readonly) bool requiresAuthenticatedInput;
@property (nonatomic, copy) UIImage *selectedImage;
@property (nonatomic, readonly) id sender;
@property (nonatomic, readonly) NSString *sf_commandSource;
@property (nonatomic) long long state;
@property (getter=_getStateObservers, setter=_setStateObservers:, nonatomic, retain) NSPointerArray *stateObservers;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_defaultCommandForAction:(SEL)arg1;
+ (id)_defaultCommands;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5;
+ (id)commandWithTitle:(id)arg1 imageName:(id)arg2 action:(SEL)arg3;
+ (id)commandWithTitle:(id)arg1 imageName:(id)arg2 attributes:(unsigned long long)arg3 action:(SEL)arg4;
+ (id)commandWithTitle:(id)arg1 imageName:(id)arg2 preferredDisplayMode:(unsigned long long)arg3 action:(SEL)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_acceptMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3 deferredElementVisit:(id /* block */)arg4;
- (void)_acceptMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_addStateObserver:(id)arg1;
- (id)_alternateForModifierFlags:(long long)arg1;
- (id)_alternateForModifierFlags:(long long)arg1 usingAlternates:(id)arg2;
- (id)_getStateObservers;
- (id)_identifier;
- (id)_immutableCopy;
- (bool)_isDefaultCommand;
- (bool)_isLeaf;
- (id)_leafAlternates;
- (id)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (void)_performWithSender:(id)arg1 handler:(id /* block */)arg2;
- (void)_removeStateObserver:(id)arg1;
- (id)_resolvedTargetFromFirstTarget:(id)arg1 sender:(id)arg2;
- (void)_setState:(long long)arg1 notifyingObservers:(bool)arg2;
- (void)_setStateObservers:(id)arg1;
- (id)_target;
- (bool)_useSenderForResolvingTarget;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
- (SEL)action;
- (id)alternates;
- (unsigned long long)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discoverabilityTitle;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommand:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 action:(SEL)arg4 propertyList:(id)arg5 alternates:(id)arg6 discoverabilityTitle:(id)arg7 attributes:(unsigned long long)arg8 state:(long long)arg9;
- (bool)isEqual:(id)arg1;
- (bool)keepsMenuPresented;
- (void)performWithSender:(id)arg1 target:(id)arg2;
- (id)presentationSourceItem;
- (id)propertyList;
- (bool)requiresAuthenticatedInput;
- (id)selectedImage;
- (id)sender;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDiscoverabilityTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)set_useSenderForResolvingTarget:(bool)arg1;
- (long long)state;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

- (id)sf_commandSource;

@end
