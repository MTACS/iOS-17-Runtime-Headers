
@interface UIAction : UIMenuElement <UIMenuLeaf, _UIMenuLeaf, _UIMenuStateObserverableLeaf> {
    unsigned long long  _attributes;
    NSString * _discoverabilityTitle;
    id /* block */  _handler;
    NSString * _identifier;
    bool  _requiresAuthenticatedInput;
    UIImage * _selectedImage;
    id  _sender;
    long long  _state;
    NSPointerArray * stateObservers;
}

@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic) unsigned long long attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *discoverabilityTitle;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (getter=ic_isDestructive, nonatomic) bool ic_destructive;
@property (getter=ic_isDisabled, nonatomic) bool ic_disabled;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, readonly) bool keepsMenuPresented;
@property (getter=pl_isDefaultAction, nonatomic) bool pl_defaultAction;
@property (nonatomic, readonly) <UIPopoverPresentationControllerSourceItem> *presentationSourceItem;
@property (nonatomic, readonly) bool requiresAuthenticatedInput;
@property (nonatomic, copy) UIImage *selectedImage;
@property (nonatomic, readonly) id sender;
@property (nonatomic) long long state;
@property (getter=_getStateObservers, setter=_setStateObservers:, nonatomic, retain) NSPointerArray *stateObservers;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_textFromCameraImage;
+ (id)_textFromCameraImageName;
+ (id)_textFromCameraTitle;
+ (id)_textFromCameraTitleForResponder:(id)arg1;
+ (id)actionWithHandler:(id /* block */)arg1;
+ (id)actionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 handler:(id /* block */)arg4;
+ (id)captureTextFromCameraActionForResponder:(id)arg1 identifier:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)textInteractableItemDefaultAction;

- (void).cxx_destruct;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_acceptMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3 deferredElementVisit:(id /* block */)arg4;
- (void)_acceptMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_addStateObserver:(id)arg1;
- (id)_getStateObservers;
- (id)_immutableCopy;
- (bool)_isDefaultCommand;
- (bool)_isLeaf;
- (id)_leafAlternates;
- (id)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (void)_performWithTarget:(id)arg1;
- (void)_removeStateObserver:(id)arg1;
- (id)_resolvedTargetFromFirstTarget:(id)arg1 sender:(id)arg2;
- (void)_setState:(long long)arg1 notifyingObservers:(bool)arg2;
- (void)_setStateObservers:(id)arg1;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
- (unsigned long long)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discoverabilityTitle;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)handler;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 discoverabilityTitle:(id)arg4 attributes:(unsigned long long)arg5 state:(long long)arg6 handler:(id /* block */)arg7;
- (bool)isEqual:(id)arg1;
- (bool)keepsMenuPresented;
- (void)performWithSender:(id)arg1 target:(id)arg2;
- (id)presentationSourceItem;
- (bool)requiresAuthenticatedInput;
- (id)selectedImage;
- (id)sender;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDiscoverabilityTitle:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (long long)state;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_debugKillWebProcessActionForWebView:(id)arg1;
+ (id)_sf_openInNewTabActionWithHandler:(id /* block */)arg1;
+ (id)safari_actionWithTarget:(id)arg1 selector:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/FocusUI.framework/FocusUI

- (bool)fcui_isEqualToAction:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)ic_actionWithAttributedTitle:(id)arg1 handler:(id /* block */)arg2;
+ (id)ic_actionWithImage:(id)arg1 handler:(id /* block */)arg2;
+ (id)ic_actionWithImageName:(id)arg1 handler:(id /* block */)arg2;
+ (id)ic_actionWithTitle:(id)arg1 handler:(id /* block */)arg2;
+ (id)ic_actionWithTitle:(id)arg1 imageName:(id)arg2 attributes:(unsigned long long)arg3 handler:(id /* block */)arg4;
+ (id)ic_actionWithTitle:(id)arg1 imageName:(id)arg2 handler:(id /* block */)arg3;
+ (id)ic_actionWithTitle:(id)arg1 subtitle:(id)arg2 imageName:(id)arg3 attributes:(unsigned long long)arg4 handler:(id /* block */)arg5;
+ (id)ic_actionWithTitle:(id)arg1 subtitle:(id)arg2 imageName:(id)arg3 handler:(id /* block */)arg4;
+ (id)ic_centerWindowActionWithAppURL:(id)arg1 activationRequestOptions:(id)arg2;
+ (id)ic_collaborateManageActionWithCloudSyncingObject:(id)arg1 withHandler:(id /* block */)arg2;
+ (id)ic_collaborateShareActionWithCloudSyncingObject:(id)arg1 withHandler:(id /* block */)arg2;
+ (id)ic_deleteActionWithHandler:(id /* block */)arg1;
+ (id)ic_deleteActionWithNumberOfElements:(unsigned long long)arg1 handler:(id /* block */)arg2;
+ (id)ic_editSmartFolderActionWithHandler:(id /* block */)arg1;
+ (id)ic_exportArchiveActionWithHandler:(id /* block */)arg1;
+ (id)ic_importArchiveActionWithHandler:(id /* block */)arg1;
+ (id)ic_lockNoteActionLocked:(bool)arg1 withHandler:(id /* block */)arg2;
+ (id)ic_moveActionWithHandler:(id /* block */)arg1;
+ (id)ic_moveActionWithWithNumberOfElements:(unsigned long long)arg1 handler:(id /* block */)arg2;
+ (id)ic_pinNoteActionPinned:(bool)arg1 numberOfElements:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
+ (id)ic_pinNoteActionPinned:(bool)arg1 withHandler:(id /* block */)arg2;
+ (id)ic_removeActionWithHandler:(id /* block */)arg1;
+ (id)ic_renameActionWithHandler:(id /* block */)arg1;
+ (id)ic_replyActionWithHandler:(id /* block */)arg1;
+ (id)ic_sendActionWithHandler:(id /* block */)arg1;
+ (id)ic_showActivityStreamActionWithCloudSyncingObject:(id)arg1 withHandler:(id /* block */)arg2;

- (bool)ic_isDestructive;
- (bool)ic_isDisabled;
- (void)setIc_destructive:(bool)arg1;
- (void)setIc_disabled:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit

- (bool)pl_isDefaultAction;
- (void)setPl_defaultAction:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

+ (id)vk_itemWithTitle:(id)arg1;
+ (id)vk_itemWithTitle:(id)arg1 subtitle:(id)arg2;

@end
