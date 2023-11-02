
@interface HMMutableCameraBulletinBoardNotificationCondition : HMCameraBulletinBoardNotificationCondition

@property (copy) NSPredicate *dateComponentsPredicate;
@property (copy) NSPredicate *presencePredicate;
@property (copy) HMCameraSignificantEventPersonFamiliarityNotificationCondition *significantEventPersonFamiliarityCondition;
@property (copy) HMCameraSignificantEventReasonNotificationCondition *significantEventReasonCondition;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
