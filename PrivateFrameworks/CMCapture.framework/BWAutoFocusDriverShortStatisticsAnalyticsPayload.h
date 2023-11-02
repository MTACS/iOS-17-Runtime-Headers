
@interface BWAutoFocusDriverShortStatisticsAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    NSDictionary * _afDriverShortStatistics;
    NSString * _portType;
}

@property (nonatomic, retain) NSDictionary *afDriverShortStatistics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *portType;
@property (readonly) Class superclass;

- (id)afDriverShortStatistics;
- (void)dealloc;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (id)portType;
- (void)reset;
- (void)setAfDriverShortStatistics:(id)arg1;
- (void)setPortType:(id)arg1;

@end
