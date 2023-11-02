
@interface NCMutableDigestInfo : NCDigestInfo

@property (nonatomic) long long deliveryOrder;
@property (nonatomic, copy) NSString *headerString;
@property (nonatomic, copy) NSDate *scheduleDate;
@property (nonatomic, copy) NSDateComponents *scheduleTime;
@property (nonatomic, copy) NSString *titleString;

- (void)setDeliveryOrder:(long long)arg1;
- (void)setHeaderString:(id)arg1;
- (void)setScheduleDate:(id)arg1;
- (void)setScheduleTime:(id)arg1;
- (void)setTitleString:(id)arg1;

@end
