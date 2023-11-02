
@interface HMCameraBulletinBoardNotificationCondition : NSObject <HMFObject, NSCopying, NSMutableCopying> {
    NSPredicate * _dateComponentsPredicate;
    NSPredicate * _presencePredicate;
    HMCameraSignificantEventPersonFamiliarityNotificationCondition * _significantEventPersonFamiliarityCondition;
    HMCameraSignificantEventReasonNotificationCondition * _significantEventReasonCondition;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (copy) NSPredicate *dateComponentsPredicate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSPredicate *predicate;
@property (copy) NSPredicate *presencePredicate;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (copy) HMCameraSignificantEventPersonFamiliarityNotificationCondition *significantEventPersonFamiliarityCondition;
@property (copy) HMCameraSignificantEventReasonNotificationCondition *significantEventReasonCondition;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateComponentsPredicate;
- (id)description;
- (id)init;
- (id)initWithPredicate:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)predicate;
- (id)presencePredicate;
- (id)privateDescription;
- (void)setDateComponentsPredicate:(id)arg1;
- (void)setPresencePredicate:(id)arg1;
- (void)setSignificantEventPersonFamiliarityCondition:(id)arg1;
- (void)setSignificantEventReasonCondition:(id)arg1;
- (id)shortDescription;
- (id)significantEventPersonFamiliarityCondition;
- (id)significantEventReasonCondition;

@end
