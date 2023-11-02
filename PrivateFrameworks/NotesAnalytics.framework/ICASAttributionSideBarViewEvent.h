
@interface ICASAttributionSideBarViewEvent : NSObject <AAEventType>

@property (nonatomic, readonly, copy) NSDictionary *eventProperties;

+ (id)eventName;
+ (id)sessionGroup;
+ (long long)timestampGranularity;

- (id)eventProperties;

@end
