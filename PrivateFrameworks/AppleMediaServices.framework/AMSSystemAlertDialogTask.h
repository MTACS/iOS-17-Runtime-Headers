
@interface AMSSystemAlertDialogTask : AMSTask {
    AMSDialogResult * _autoDismissResult;
    long long  _defaultButtonIndex;
    bool  _dismissOnHomeButton;
    bool  _dismissOnLock;
    bool  _displaysOnLockscreen;
    bool  _isDialogDismissalEnabled;
    AMSDialogRequest * _request;
    bool  _shouldDismissAfterUnlock;
    bool  _shouldDisplayAsTopMost;
    bool  _shouldPendInSetupIfNotAllowed;
    long long  _unlockActionButtonIndex;
    struct __CFUserNotification { } * _userNotification;
}

@property (nonatomic, retain) AMSDialogResult *autoDismissResult;
@property long long defaultButtonIndex;
@property bool dismissOnHomeButton;
@property bool dismissOnLock;
@property bool displaysOnLockscreen;
@property bool isDialogDismissalEnabled;
@property (nonatomic, readonly) AMSDialogRequest *request;
@property bool shouldDismissAfterUnlock;
@property bool shouldDisplayAsTopMost;
@property bool shouldPendInSetupIfNotAllowed;
@property long long unlockActionButtonIndex;
@property struct __CFUserNotification { }*userNotification;

- (void).cxx_destruct;
- (struct __CFDictionary { }*)_createNoteDictionaryWithKeys:(struct ButtonKey { struct __CFString {} *x1; int x2; }*)arg1 buttonActions:(id)arg2 outOptions:(unsigned long long*)arg3;
- (long long)_defaultButtonIndexForActions:(id)arg1;
- (void)_dismiss;
- (id)_handleResponseForNote:(struct __CFUserNotification { }*)arg1 buttonActions:(id)arg2 keys:(struct ButtonKey { struct __CFString {} *x1; int x2; }*)arg3;
- (long long)_keyboardTypeFor:(long long)arg1;
- (id)_reorderButtonActions;
- (struct __CFUserNotification { }*)_showNotificationFromDictionary:(struct __CFDictionary { }*)arg1 options:(unsigned long long)arg2;
- (id)autoDismissResult;
- (long long)defaultButtonIndex;
- (bool)dismissOnHomeButton;
- (bool)dismissOnLock;
- (bool)displaysOnLockscreen;
- (id)initWithRequest:(id)arg1;
- (bool)isDialogDismissalEnabled;
- (id)present;
- (id)request;
- (void)setAutoDismissResult:(id)arg1;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)setDismissOnHomeButton:(bool)arg1;
- (void)setDismissOnLock:(bool)arg1;
- (void)setDisplaysOnLockscreen:(bool)arg1;
- (void)setIsDialogDismissalEnabled:(bool)arg1;
- (void)setShouldDismissAfterUnlock:(bool)arg1;
- (void)setShouldDisplayAsTopMost:(bool)arg1;
- (void)setShouldPendInSetupIfNotAllowed:(bool)arg1;
- (void)setUnlockActionButtonIndex:(long long)arg1;
- (void)setUserNotification:(struct __CFUserNotification { }*)arg1;
- (bool)shouldDismissAfterUnlock;
- (bool)shouldDisplayAsTopMost;
- (bool)shouldPendInSetupIfNotAllowed;
- (long long)unlockActionButtonIndex;
- (struct __CFUserNotification { }*)userNotification;

@end
