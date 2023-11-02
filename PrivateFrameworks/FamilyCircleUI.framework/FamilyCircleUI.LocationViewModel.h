
@interface FamilyCircleUI.LocationViewModel : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _childCanModifyLocationStatus;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _disableLocationToggles;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _familyMembersSharingLocationWithMe;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _membersAutomaticallySharing;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _parentCanToggleChildsLocation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _sharingLocationWithFamilyMembers;
    void cancellables;
    void circleStore;
    void fmfSession;
    void locationListener;
    void screenTimeConnection;
    void servicesStore;
}

+ (id)createModel;
+ (void)setShared:(id)arg1;
+ (id)shared;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
