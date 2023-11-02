
@interface HMDEventTriggerModel : HMDTriggerModel

@property (nonatomic, retain) NSData *evaluationCondition;
@property (nonatomic, retain) NSNumber *executeOnce;
@property (nonatomic, retain) NSData *recurrences;

+ (id)properties;

- (id)createPayload;
- (id)createPayloadWithCondition:(id)arg1;

@end
