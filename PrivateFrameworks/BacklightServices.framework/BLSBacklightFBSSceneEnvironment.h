
@interface BLSBacklightFBSSceneEnvironment : NSObject <BLSBacklightSceneEnvironment_Private, _UISceneComponentProviding> {
    BLSAlwaysOnSession * _alwaysOnSession;
    bool  _animatingVisualState;
    <BLSBacklightSceneEnvironmentDelegate> * _delegate;
    FBSScene * _fbsScene;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <BLSBacklightSceneEnvironmentUpdating> * _updater;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (retain) BLSAlwaysOnSession *alwaysOnSession;
@property (getter=isAnimatingVisualState) bool animatingVisualState;
@property (readonly, copy) NSString *debugDescription;
@property (retain) <BLSBacklightSceneEnvironmentDelegate> *delegate;
@property (getter=isDelegateActive, readonly) bool delegateActive;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayBlanked, readonly) bool displayBlanked;
@property (getter=_FBSScene, setter=_setFBSScene:) FBSScene *fbsScene;
@property (readonly) BLSAlwaysOnFrameSpecifier *frameSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (getter=isLiveUpdating, readonly) bool liveUpdating;
@property bool optsOutOfProcessAssertions;
@property (readonly) NSDate *presentationDate;
@property (readonly) Class superclass;
@property bool supportsAlwaysOn;
@property (getter=hasUnrestrictedFramerateUpdates, readonly) bool unrestrictedFramerateUpdates;
@property (retain) <BLSBacklightSceneEnvironmentUpdating> *updater;
@property (readonly) BLSBacklightSceneVisualState *visualState;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

+ (void)createEnvironmentForFBSScene:(id)arg1;

- (void).cxx_destruct;
- (id)_FBSScene;
- (void)_setFBSScene:(id)arg1;
- (id)alwaysOnSession;
- (id)delegate;
- (id)description;
- (id)frameSpecifier;
- (bool)hasUnrestrictedFramerateUpdates;
- (id)identifier;
- (id)initWithFBSScene:(id)arg1;
- (void)invalidateAllTimelinesForReason:(id)arg1;
- (bool)isAnimatingVisualState;
- (bool)isDelegateActive;
- (bool)isDisplayBlanked;
- (bool)isLiveUpdating;
- (bool)optsOutOfProcessAssertions;
- (id)presentationDate;
- (void)setAlwaysOnSession:(id)arg1;
- (void)setAnimatingVisualState:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOptsOutOfProcessAssertions:(bool)arg1;
- (void)setSupportsAlwaysOn:(bool)arg1;
- (void)setUpdater:(id)arg1;
- (bool)supportsAlwaysOn;
- (id)updater;
- (id)visualState;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_actionRespondersForScene:(id)arg1;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (id)initWithScene:(id)arg1;

@end
