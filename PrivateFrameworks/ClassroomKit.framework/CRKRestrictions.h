
@interface CRKRestrictions : NSObject

+ (id)classroomAirPlayAllowed;
+ (id)classroomAutomaticallyJoinClassesForced;
+ (id)classroomDeviceSettingsModificationAllowed;
+ (id)classroomLockDeviceAllowed;
+ (id)classroomOpenAppAllowed;
+ (id)classroomOpenDeepLinkAllowed;
+ (id)classroomOpenURLAllowed;
+ (id)classroomRequestPermissionToLeaveClassesForced;
+ (id)classroomRoles;
+ (id)classroomScreenObservationAllowed;
+ (id)classroomUnpromptedAppAndDeviceLockForced;
+ (id)classroomUnpromptedScreenObservationForced;
+ (id)didChangeNotification;
+ (id)remoteScreenObservationAllowed;
+ (id)screenShotAllowed;
+ (id)unpromptedRemoteScreenObservationForced;

@end
