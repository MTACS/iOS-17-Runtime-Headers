
@interface HMDCameraSnapshotNotificationTimer : HMFTimer {
    NSSet * _changedCharacteristics;
    NSArray * _postedBulletins;
    NSString * _sessionID;
}

@property (nonatomic, readonly) NSSet *changedCharacteristics;
@property (nonatomic, retain) NSArray *postedBulletins;
@property (nonatomic, readonly) NSString *sessionID;

- (void).cxx_destruct;
- (id)changedCharacteristics;
- (id)initWithCameraSessionID:(id)arg1 changedCharacteristics:(id)arg2 timeInterval:(double)arg3;
- (id)postedBulletins;
- (id)sessionID;
- (void)setPostedBulletins:(id)arg1;

@end
