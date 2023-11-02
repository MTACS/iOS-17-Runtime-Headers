
@interface FamilyCircleUI.AppleCardFamilySettingsViewModel : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _sharingCardWithFamilyMembers;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _shouldHideShareCardButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showAppleCardFamilyScreen;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showShareAppleCardFlow;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _subLabel;
    void appleCardStore;
    void appleCardUtilities;
    void cancellables;
    void familyCircleStore;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)serviceAccountDidChange;

@end
