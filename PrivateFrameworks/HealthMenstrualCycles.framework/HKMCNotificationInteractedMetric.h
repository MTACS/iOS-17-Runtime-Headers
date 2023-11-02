
@interface HKMCNotificationInteractedMetric : NSObject {
    NSString * _action;
    NSString * _category;
    NSDictionary * _eventPayload;
}

@property (nonatomic, retain) NSString *action;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, copy) NSDictionary *eventPayload;

+ (id)eventName;

- (void).cxx_destruct;
- (id)action;
- (id)category;
- (id)description;
- (id)eventPayload;
- (id)initWithCategory:(id)arg1 action:(id)arg2;
- (void)setAction:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setEventPayload:(id)arg1;

@end
