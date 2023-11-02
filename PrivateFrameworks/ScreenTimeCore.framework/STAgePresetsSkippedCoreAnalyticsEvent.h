
@interface STAgePresetsSkippedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    NSString * _sessionId;
}

@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) NSString *sessionId;

+ (id)description;

- (void).cxx_destruct;
- (id)initWithSessionId:(id)arg1;
- (id)name;
- (id)payload;
- (id)sessionId;

@end
