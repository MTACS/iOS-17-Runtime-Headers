
@interface MKFCKTimerTrigger : MKFCKTrigger

@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic, retain) NSTimeZone *fireDateTimeZone;
@property (nonatomic, retain) NSDateComponents *fireRepeatInterval;
@property (nonatomic) long long recurrencesInt;
@property (nonatomic, copy) NSString *significantEvent;
@property (nonatomic, retain) NSDateComponents *significantEventOffset;

+ (id)fetchRequest;

- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;

@end
