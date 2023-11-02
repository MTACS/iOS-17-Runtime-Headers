
@interface UIControl : UIView <SKUIAdvertisingPrivacyControlProtocol, SUUIAdvertisingPrivacyControlProtocol, UIContextMenuInteractionDelegate, UIContextMenuInteractionDelegate_Private, UIPointerInteractionDelegate, _UIVariableGestureContextMenuInteractionDelegate> {
    struct { 
        unsigned int disabled : 1; 
        unsigned int tracking : 1; 
        unsigned int touchInside : 1; 
        unsigned int touchDragged : 1; 
        unsigned int requiresDisplayOnTracking : 1; 
        unsigned int highlighted : 1; 
        unsigned int dontHighlightOnTouchDown : 1; 
        unsigned int allowActionsToQueue : 1; 
        unsigned int pendingUnhighlight : 1; 
        unsigned int selected : 1; 
        unsigned int verticalAlignment : 3; 
        unsigned int horizontalAlignment : 3; 
        unsigned int wasLastHighlightSuccessful : 1; 
        unsigned int touchHasHighlighted : 1; 
        unsigned int enableSymbolAnimations : 1; 
        unsigned int hasPointerInteraction : 1; 
        unsigned int hasProxyPointerInteraction : 1; 
        unsigned int hasContextMenuInteraction : 1; 
        unsigned int highlightForMenuPresentation : 1; 
    }  _controlFlags;
    double  _downTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousPoint;
    long long  _requiredButtonMask;
    NSMutableArray * _targetActions;
}

@property (nonatomic, readonly) bool _allowsSymbolAnimations;
@property (setter=_setEnableSymbolAnimations:, nonatomic) bool _enableSymbolAnimations;
@property (setter=_setHasActiveMenuPresentation:, nonatomic) bool _hasActiveMenuPresentation;
@property (nonatomic, readonly) UIPointerInteraction *_pointerInteraction;
@property (setter=_setProxyPointerInteraction:, nonatomic, retain) UIPointerInteraction *_proxyPointerInteraction;
@property (setter=_setProxySender:, nonatomic) id _proxySender;
@property (setter=_setRequiredButtonMask:, nonatomic) long long _requiredButtonMask;
@property (nonatomic, retain) NSString *adPrivacyData;
@property (nonatomic, readonly) unsigned long long allControlEvents;
@property (nonatomic, readonly) NSSet *allTargets;
@property (nonatomic) long long contentHorizontalAlignment;
@property (nonatomic) long long contentVerticalAlignment;
@property (getter=isContextMenuEnabled, nonatomic) bool contextMenuEnabled;
@property (nonatomic, readonly) UIContextMenuInteraction *contextMenuInteraction;
@property (getter=isContextMenuInteractionEnabled, nonatomic) bool contextMenuInteractionEnabled;
@property (nonatomic) bool contextMenuIsPrimary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long effectiveContentHorizontalAlignment;
@property (nonatomic, readonly) long long effectiveContentVerticalAlignment;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) UIPointerInteraction *pointerInteraction;
@property (getter=isPointerInteractionEnabled, nonatomic) bool pointerInteractionEnabled;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) bool showsMenuAsPrimaryAction;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (getter=isSymbolAnimationEnabled, nonatomic) bool symbolAnimationEnabled;
@property (nonatomic, copy) NSString *toolTip;
@property (nonatomic, readonly) UIToolTipInteraction *toolTipInteraction;
@property (getter=isTouchInside, nonatomic, readonly) bool touchInside;
@property (getter=isTracking, nonatomic, readonly) bool tracking;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_allowActionsToQueue;
+ (unsigned long long)_primaryStateForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)__distributionStatisticsForUserInteractionDuration;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (bool)_accessibilityShouldActivateOnHUDLift;
- (void)_activateForAccessibilityHUDLiftAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_addControlTargetAction:(id)arg1;
- (id)_allTargetActions;
- (bool)_allowsSymbolAnimations;
- (void)_beginInteractionDurationStatisticMeasurements;
- (void)_cancelDelayedActions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippedHighlightBounds;
- (void)_commitInteractionDurationStatisticMeasurements;
- (void)_commonInitForPrimaryAction:(id)arg1;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (id)_contextMenuInteraction;
- (id)_contextMenuInteraction:(id)arg1 configuration:(id)arg2 interactionEffectForTargetedPreview:(id)arg3;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (void)_contextMenuInteraction:(id)arg1 willBeginWithConfiguration:(id)arg2;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_createPointerInteraction;
- (void)_delayActions;
- (void)_diagnoseFocusabilityForReport:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)_distributionStatisticsForUserInteractionDuration;
- (bool)_enableSymbolAnimations;
- (long long)_focusedSound;
- (bool)_hasActionForEventMask:(unsigned long long)arg1;
- (bool)_hasActiveMenuPresentation;
- (double)_highlightCornerRadius;
- (void)_incrementStatisticsForUserActionForEvents:(unsigned long long)arg1;
- (void)_invalidatePointerInteraction;
- (id)_pointerInteraction;
- (bool)_providesCustomPointerInteraction;
- (id)_proxyPointerInteraction;
- (id)_proxySender;
- (void)_registerCustomHoverStylePointerDriverIfNeeded;
- (long long)_requiredButtonMask;
- (id)_scalarStatisticsForUserTouchUpInsideEvent;
- (id)_scalarStatisticsForUserValueChangedEvent;
- (long long)_sceneDraggingBehaviorOnPan;
- (void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)_sendDelayedActions;
- (void)_sendDelayedActions:(bool)arg1;
- (void)_setEnableSymbolAnimations:(bool)arg1;
- (void)_setHasActiveMenuPresentation:(bool)arg1;
- (void)_setHighlightOnMouseDown:(bool)arg1;
- (void)_setImplicitHoverStyle:(id)arg1;
- (void)_setLastHighlightSuccessful:(bool)arg1;
- (void)_setProxyPointerInteraction:(id)arg1;
- (void)_setProxySender:(id)arg1;
- (void)_setRequiredButtonMask:(long long)arg1;
- (void)_setTouchHasHighlighted:(bool)arg1;
- (unsigned long long)_stateForFocusUpdateContext:(id)arg1;
- (id)_systemDefaultFocusGroupIdentifier;
- (bool)_touchHasHighlighted;
- (void)_unhighlight;
- (bool)_wasLastHighlightSuccessful;
- (void)_willMoveToWindow:(id)arg1;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2;
- (void)addAction:(id)arg1 forControlEvents:(unsigned long long)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3;
- (unsigned long long)allControlEvents;
- (id)allTargets;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (bool)cancelMouseTracking;
- (bool)cancelTouchTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (long long)contentHorizontalAlignment;
- (long long)contentVerticalAlignment;
- (id)contextMenuInteraction;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (bool)contextMenuIsPrimary;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (long long)effectiveContentHorizontalAlignment;
- (long long)effectiveContentVerticalAlignment;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)enumerateEventHandlers:(id /* block */)arg1;
- (bool)hasOneOrMoreTargets;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 primaryAction:(id)arg2;
- (bool)isContextMenuEnabled;
- (bool)isContextMenuInteractionEnabled;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isPointerInteractionEnabled;
- (bool)isSelected;
- (bool)isSymbolAnimationEnabled;
- (bool)isTouchInside;
- (bool)isTracking;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(id)arg1;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)removeAction:(id)arg1 forControlEvents:(unsigned long long)arg2;
- (void)removeActionForIdentifier:(id)arg1 forControlEvents:(unsigned long long)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)removeTarget:(id)arg1 forEvents:(int)arg2;
- (bool)requiresDisplayOnTracking;
- (void)sendAction:(id)arg1;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setContextMenuEnabled:(bool)arg1;
- (void)setContextMenuInteractionEnabled:(bool)arg1;
- (void)setContextMenuIsPrimary:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHoverStyle:(id)arg1;
- (void)setPointerInteractionEnabled:(bool)arg1;
- (void)setRequiresDisplayOnTracking:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowsMenuAsPrimaryAction:(bool)arg1;
- (void)setSymbolAnimationEnabled:(bool)arg1;
- (void)setToolTip:(id)arg1;
- (void)setTracking:(bool)arg1;
- (bool)shouldTrack;
- (bool)showsMenuAsPrimaryAction;
- (unsigned long long)state;
- (id)toolTip;
- (id)toolTipInteraction;
- (bool)touchDragged;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_super_touchesCancelled:(id)arg1 withEvent:(id)arg2;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_setTarget:(id)arg1 action:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

- (long long)_nui_baselineViewType;

// Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI

- (id)adPrivacyData;
- (void)setAdPrivacyData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed

- (void)ne_sendAction:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

+ (id)grabberView;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (id)adPrivacyData;
- (void)setAdPrivacyData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

- (void)tmlSignalAttach:(id)arg1;
- (void)tmlSignalDetach:(id)arg1;

@end
