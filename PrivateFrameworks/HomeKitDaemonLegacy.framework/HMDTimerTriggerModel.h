
@interface HMDTimerTriggerModel : HMDTriggerModel

@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic, copy) NSData *fireDateTimeZone;
@property (nonatomic, copy) NSData *fireRepeatInterval;
@property (nonatomic, copy) NSData *recurrences;
@property (nonatomic, copy) NSString *significantEvent;
@property (nonatomic, copy) NSData *significantEventOffset;

+ (id)properties;

- (id)createPayload;

@end
