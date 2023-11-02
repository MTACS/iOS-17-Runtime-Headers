
@interface HLPAnalyticsEvent : NSObject

@property (readonly) NSDictionary *caRepresentation;
@property (readonly) NSString *eventName;

+ (id)event;

- (id)caRepresentation;
- (id)eventName;
- (void)log;

@end
