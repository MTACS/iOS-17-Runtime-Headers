
@interface STAgePresetsViewedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    bool  _initialSetup;
    NSString * _sessionId;
}

@property (readonly, copy) NSString *description;
@property (readonly) bool initialSetup;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) NSString *sessionId;

+ (id)description;

- (void).cxx_destruct;
- (id)initWithSessionId:(id)arg1 isInitialSetup:(bool)arg2;
- (bool)initialSetup;
- (id)name;
- (id)payload;
- (id)sessionId;

@end
