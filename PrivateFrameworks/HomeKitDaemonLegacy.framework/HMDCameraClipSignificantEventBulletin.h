
@interface HMDCameraClipSignificantEventBulletin : NSObject {
    HMDAccessory * _accessory;
    NSString * _body;
    HMDCameraProfile * _camera;
    NSUUID * _clipUUID;
    NSDate * _dateOfOccurrence;
    HMDHome * _home;
    NSURL * _previewImageFilePathURL;
    NSUUID * _previewImageNotificationUUID;
    NSString * _requestIdentifier;
    HMDService * _service;
    bool  _shouldShowProvideFeedbackButton;
    NSSet * _significantEvents;
    NSString * _threadIdentifier;
    NSString * _title;
    NSDictionary * _userInfo;
}

@property (readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *body;
@property (readonly) HMDCameraProfile *camera;
@property (readonly, copy) NSUUID *clipUUID;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly) HMDHome *home;
@property (readonly) NSURL *previewImageFilePathURL;
@property (readonly, copy) NSUUID *previewImageNotificationUUID;
@property (readonly, copy) NSString *requestIdentifier;
@property (readonly) HMDService *service;
@property (readonly) bool shouldShowProvideFeedbackButton;
@property (readonly, copy) NSSet *significantEvents;
@property (readonly, copy) NSString *threadIdentifier;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSDictionary *userInfo;

+ (id)actionURLForHomeUUID:(id)arg1 cameraUUID:(id)arg2;
+ (unsigned long long)effectiveReasonForSignificantEvent:(id)arg1;
+ (id)localizedMessageForSignificantEvents:(id)arg1 cameraAccessory:(id)arg2;

- (void).cxx_destruct;
- (id)accessory;
- (id)body;
- (id)camera;
- (id)clipUUID;
- (id)createUserInfoWithWithSignificantEvents:(id)arg1 previewImageNotificationUUID:(id)arg2 camera:(id)arg3 home:(id)arg4 accessory:(id)arg5 recordingService:(id)arg6 clipUUID:(id)arg7;
- (id)dateOfOccurrence;
- (id)home;
- (id)initWithSignificantEvent:(id)arg1 previewImageFilePathURL:(id)arg2 dateOfOccurrence:(id)arg3 camera:(id)arg4 home:(id)arg5 accessory:(id)arg6 recordingService:(id)arg7 shouldShowProvideFeedbackButton:(bool)arg8;
- (id)initWithSignificantEvents:(id)arg1 previewImageNotificationUUID:(id)arg2 previewImageFilePathURL:(id)arg3 dateOfOccurrence:(id)arg4 camera:(id)arg5 home:(id)arg6 accessory:(id)arg7 recordingService:(id)arg8 clipUUID:(id)arg9 shouldShowProvideFeedbackButton:(bool)arg10;
- (id)initWithSignificantEvents:(id)arg1 previewImageNotificationUUID:(id)arg2 previewImageFilePathURL:(id)arg3 dateOfOccurrence:(id)arg4 camera:(id)arg5 home:(id)arg6 accessory:(id)arg7 recordingService:(id)arg8 requestIdentifier:(id)arg9 clipUUID:(id)arg10 shouldShowProvideFeedbackButton:(bool)arg11;
- (id)previewImageFilePathURL;
- (id)previewImageNotificationUUID;
- (id)requestIdentifier;
- (id)service;
- (bool)shouldShowProvideFeedbackButton;
- (id)significantEvents;
- (id)threadIdentifier;
- (id)title;
- (id)userInfo;

@end
