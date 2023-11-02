
@interface HMDAudioAnalysisEventBulletinNotificationRegistrationRemote : HMFObject {
    HMDAudioAnalysisEventBulletinNotificationRegistration * _registration;
    HMDBulletinNotificationRegistrationSource * _source;
}

@property (readonly, copy) HMDAudioAnalysisEventBulletinNotificationRegistration *registration;
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithAudioAnalysisEventBulletinNotificationRegistration:(id)arg1 source:(id)arg2;
- (id)registration;
- (id)source;

@end
