
@interface SBUserNotificationAlert : SBAlertItem <UITextFieldDelegate> {
    unsigned int  _aboveLock;
    NSString * _alertHeader;
    id  _alertMessage;
    NSString * _alertMessageDelimiter;
    NSString * _alertSource;
    unsigned int  _allowLockscreenDismissal;
    unsigned int  _allowMenuButtonDismissal;
    unsigned int  _allowedInLoginWindow;
    long long  _alternateButtonActionStyle;
    NSString * _alternateButtonTitle;
    SBSUserNotificationImageDefinition * _attachmentImageDefinition;
    id  _autocapitalizationTypes;
    id  _autocorrectionTypes;
    unsigned int  _behavesSuperModally;
    unsigned int  _canceled;
    bool  _cleanedUp;
    unsigned int  _configuredLocked;
    unsigned int  _configuredNeedsPasscode;
    double  _creationTime;
    NSArray * _customButtonDefinitions;
    unsigned int  _deactivatingForPresentationUpdate;
    long long  _defaultButtonActionStyle;
    int  _defaultButtonTag;
    NSString * _defaultButtonTitle;
    unsigned int  _defaultResponseAppLaunchWaitingForPasscode;
    NSString * _defaultResponseLaunchBundleID;
    NSURL * _defaultResponseLaunchURL;
    unsigned int  _disableIdleSleepWhileVisible;
    unsigned int  _dismissOnLock;
    unsigned int  _dismissesOverlaysOnLockScreen;
    unsigned int  _displayActionButtonOnLockScreen;
    unsigned int  _dontDismissOnUnlock;
    NSObject<OS_dispatch_source> * _expirationTimer;
    _SBSUICFUserNotificationContentHostViewController * _extensionContentViewController;
    NSString * _extensionIdentifier;
    unsigned int  _forcesModalAlertAppearance;
    SBSUserNotificationImageDefinition * _headerImageDefinition;
    unsigned int  _hideOnClonedDisplay;
    SBSUserNotificationImageDefinition * _iconImageDefinition;
    <BSInvalidatable> * _idleTimerDisableAssertion;
    NSMapTable * _imagesByDefinition;
    unsigned int  _isActivated;
    id  _keyboardTypes;
    NSString * _lockScreenAlertHeader;
    id  _lockScreenAlertMessage;
    NSString * _lockScreenAlertMessageDelimiter;
    int  _originatingPID;
    long long  _otherButtonActionStyle;
    NSString * _otherButtonTitle;
    NSObject<OS_dispatch_source> * _portWatcher;
    bool  _prefersSystemAperturePresentation;
    BKSProcessAssertion * _processAssertion;
    NSString * _remoteServiceBundleIdentifier;
    NSString * _remoteViewControllerClassName;
    unsigned int  _replyFlags;
    unsigned int  _replyPort;
    unsigned long long  _requestFlags;
    bool  _sentResponse;
    SBUISound * _sound;
    NSString * _soundAlertTopic;
    long long  _soundAlertType;
    unsigned int  _soundID;
    unsigned int  _soundIDBehavior;
    NSString * _soundPath;
    double  _soundRepeatDuration;
    NSTimer * _soundStopTimer;
    SBSUserNotificationSystemApertureContentDefinition * _systemApertureContentDefinition;
    NSArray * _textFieldDefinitions;
    id  _textFieldTitles;
    id  _textFieldValues;
    int  _timeout;
    int  _token;
    int  _unlockActionButtonTag;
    NSDictionary * _vibrationPattern;
    _SBLegacyRemoteAlertContentHostViewController * _viewServiceContentViewController;
    UIAlertControllerVisualStyle * _visualStyle;
    unsigned int  _wakeDisplay;
}

@property (retain) NSString *alertHeader;
@property (retain) NSString *alertMessage;
@property (retain) NSString *alertMessageDelimiter;
@property (retain) NSString *alternateButtonTitle;
@property (retain) SBSUserNotificationImageDefinition *attachmentImageDefinition;
@property (retain) id autocapitalizationTypes;
@property (retain) id autocorrectionTypes;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *defaultButtonTitle;
@property (retain) NSString *defaultResponseLaunchBundleID;
@property (retain) NSURL *defaultResponseLaunchURL;
@property (readonly, copy) NSString *description;
@property (retain) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (retain) SBSUserNotificationImageDefinition *headerImageDefinition;
@property (retain) SBSUserNotificationImageDefinition *iconImageDefinition;
@property (retain) id keyboardTypes;
@property (retain) NSString *lockScreenAlertHeader;
@property (retain) NSString *lockScreenAlertMessage;
@property (retain) NSString *lockScreenAlertMessageDelimiter;
@property (retain) NSString *otherButtonTitle;
@property bool prefersSystemAperturePresentation;
@property (retain) NSString *remoteServiceBundleIdentifier;
@property (retain) NSString *remoteViewControllerClassName;
@property (retain) NSString *soundAlertTopic;
@property long long soundAlertType;
@property unsigned int soundID;
@property unsigned int soundIDBehavior;
@property (retain) NSString *soundPath;
@property (readonly) Class superclass;
@property (retain) SBSUserNotificationSystemApertureContentDefinition *systemApertureContentDefinition;
@property (retain) id textFieldTitles;
@property (retain) id textFieldValues;
@property (retain) NSDictionary *vibrationPattern;

- (void).cxx_destruct;
- (void)_activateApplication:(id)arg1 withURL:(id)arg2;
- (id)_attachmentImage;
- (void)_cleanup;
- (void)_cleanupCustomContentViewControllers;
- (void)_clearRemoteViewControllerIfPresent;
- (id)_createSystemApertureElement;
- (bool)_displayActionButtonOnLockScreen;
- (id)_headerImage;
- (id)_imageDefinitionForPath:(id)arg1 catalogPath:(id)arg2 catalogImageKey:(id)arg3;
- (id)_imageForDefinition:(id)arg1;
- (void)_noteSilencingHardwareButtonPressed;
- (id)_parseAssetDefinition:(id)arg1;
- (id)_parseCustomButtonDefinitions:(id)arg1 locBundle:(id)arg2;
- (id)_parseLegacyTextFieldDefinitions:(id)arg1 locBundle:(id)arg2;
- (id)_parseSystemApertureContentDefinition:(id)arg1;
- (id)_parseTextFieldDefinitions:(id)arg1 locBundle:(id)arg2;
- (id)_prepareNewAlertControllerWithLockedState:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)_publicDescription;
- (id)_safeLocalizedValue:(id)arg1 withBundle:(id)arg2;
- (void)_sendResponseAndCleanUp:(int)arg1;
- (void)_sendResponseAndCleanUp:(int)arg1 customButtonResponse:(int)arg2;
- (void)_setActivated:(bool)arg1;
- (long long)_uiAlertActionLayoutDirectionFromSBUserNotificationButtonLayoutDirection:(unsigned int)arg1;
- (long long)_uiAlertActionStyleFromSBUserNotificationButtonPresentationStyle:(int)arg1;
- (id)alertHeader;
- (id)alertMessage;
- (id)alertMessageDelimiter;
- (bool)allowInLoginWindow;
- (bool)allowLockScreenDismissal;
- (bool)allowMenuButtonDismissal;
- (id)alternateButtonTitle;
- (id)attachmentImageDefinition;
- (id)autocapitalizationTypes;
- (id)autocorrectionTypes;
- (bool)behavesSuperModally;
- (void)cancel;
- (id)clientIdentifier;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (void)dealloc;
- (id)defaultButtonTitle;
- (id)defaultResponseLaunchBundleID;
- (id)defaultResponseLaunchURL;
- (id)description;
- (void)didDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (void)dismissIfNecessaryWithResponse:(int)arg1;
- (void)dismissIfNecessaryWithResponse:(int)arg1 customButtonResponse:(int)arg2;
- (bool)dismissOnLock;
- (bool)dismissesOverlaysOnLockScreen;
- (void)doCleanupAfterDeactivationAnimation;
- (id)elementIdentifier;
- (id)extensionIdentifier;
- (bool)forcesModalAlertAppearance;
- (id)headerImageDefinition;
- (bool)hideOnClonedDisplay;
- (id)iconImage;
- (id)iconImageDefinition;
- (id)initWithMessage:(id)arg1 replyPort:(unsigned int)arg2 requestFlags:(int)arg3 auditToken:(id)arg4;
- (id)keyboardTypes;
- (id)lockScreenAlertHeader;
- (id)lockScreenAlertMessage;
- (id)lockScreenAlertMessageDelimiter;
- (id)otherButtonTitle;
- (id)parseVisualStyleForMessage:(id)arg1;
- (void)performUnlockAction;
- (bool)prefersSystemAperturePresentation;
- (void)presentationStateDidChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (bool)reappearsAfterLock;
- (bool)reappearsAfterUnlock;
- (id)remoteServiceBundleIdentifier;
- (id)remoteViewControllerClassName;
- (void)setAlertHeader:(id)arg1;
- (void)setAlertMessage:(id)arg1;
- (void)setAlertMessageDelimiter:(id)arg1;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setAttachmentImageDefinition:(id)arg1;
- (void)setAutocapitalizationTypes:(id)arg1;
- (void)setAutocorrectionTypes:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setDefaultResponseLaunchBundleID:(id)arg1;
- (void)setDefaultResponseLaunchURL:(id)arg1;
- (void)setExtensionIdentifier:(id)arg1;
- (void)setHeaderImageDefinition:(id)arg1;
- (void)setIconImageDefinition:(id)arg1;
- (void)setKeyboardTypes:(id)arg1;
- (void)setLockScreenAlertHeader:(id)arg1;
- (void)setLockScreenAlertMessage:(id)arg1;
- (void)setLockScreenAlertMessageDelimiter:(id)arg1;
- (void)setOtherButtonTitle:(id)arg1;
- (void)setPrefersSystemAperturePresentation:(bool)arg1;
- (void)setRemoteServiceBundleIdentifier:(id)arg1;
- (void)setRemoteViewControllerClassName:(id)arg1;
- (void)setSoundAlertTopic:(id)arg1;
- (void)setSoundAlertType:(long long)arg1;
- (void)setSoundID:(unsigned int)arg1;
- (void)setSoundIDBehavior:(unsigned int)arg1;
- (void)setSoundPath:(id)arg1;
- (void)setSystemApertureContentDefinition:(id)arg1;
- (void)setTextFieldTitles:(id)arg1;
- (void)setTextFieldValues:(id)arg1;
- (void)setVibrationPattern:(id)arg1;
- (bool)shouldShowInLockScreen;
- (id)sound;
- (id)soundAlertTopic;
- (long long)soundAlertType;
- (unsigned int)soundID;
- (unsigned int)soundIDBehavior;
- (id)soundPath;
- (id)systemApertureContentDefinition;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (id)textFieldTitles;
- (id)textFieldValues;
- (int)token;
- (void)updateWithMessage:(id)arg1 requestFlags:(int)arg2;
- (id)vibrationPattern;
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;
- (bool)wakeDisplay;
- (void)willActivate;
- (void)willDeactivateForReason:(int)arg1;

@end
