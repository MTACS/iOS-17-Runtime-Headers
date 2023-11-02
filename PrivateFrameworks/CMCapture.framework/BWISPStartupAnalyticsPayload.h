
@interface BWISPStartupAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    int  _ispStartupTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int ispStartupTime;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (int)ispStartupTime;
- (void)reset;
- (void)setIspStartupTime:(int)arg1;

@end
