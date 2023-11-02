
@interface HMDBulletinBoardCameraNotificationAssociation : HMFObject {
    HMDCameraProfile * _cameraProfile;
    NSMutableSet * _notificationGeneratingServicesWithCamera;
}

@property (nonatomic, readonly) HMDCameraProfile *cameraProfile;
@property (nonatomic, readonly) NSMutableSet *notificationGeneratingServicesWithCamera;

- (void).cxx_destruct;
- (id)cameraProfile;
- (id)description;
- (id)initWithCameraProfile:(id)arg1;
- (id)notificationGeneratingServicesWithCamera;

@end
