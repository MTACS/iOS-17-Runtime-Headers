
@interface DSUsageLogLine : DSLogLine

@property (nonatomic, readonly) int batteryLevel;
@property (nonatomic, readonly) NSString *eventType;
@property (nonatomic, readonly) bool isOffPower;
@property (nonatomic, readonly) bool isOnPower;
@property (nonatomic, readonly) bool isReset;
@property (nonatomic, readonly) int standbyTime;
@property (nonatomic, readonly) int usageTime;

- (int)batteryLevel;
- (id)eventType;
- (bool)isOffPower;
- (bool)isOnPower;
- (bool)isReset;
- (int)standbyTime;
- (int)usageTime;

@end
