
@interface CPAnalyticsEvent : NSObject <CPAnalyticsEventProtocol> {
    NSCalendar * _gregorianCalendar;
    NSString * _name;
    NSDictionary * _payload;
    CPAnalyticsSystemProperties * _systemProperties;
    NSDate * _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSCalendar *gregorianCalendar;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *payload;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPAnalyticsSystemProperties *systemProperties;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id)dayOfWeekFromDate:(id)arg1;
+ (id)hourOfDayFromDate:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)copyRawPayload;
- (id)gregorianCalendar;
- (id)initWithName:(id)arg1 payload:(id)arg2 systemProperties:(id)arg3;
- (id)name;
- (id)payload;
- (id)propertyForKey:(id)arg1;
- (id)systemProperties;
- (id)timestamp;

@end
