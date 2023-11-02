
@interface STCommunicationSafetyStateCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    bool  _communicationSafetyEnabled;
}

@property (readonly) bool communicationSafetyEnabled;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

- (bool)communicationSafetyEnabled;
- (id)initWithCommunicationSafetyEnabled:(bool)arg1;
- (id)name;
- (id)payload;

@end
