
@interface StoreKit.SKTwoErrorEvent : SKBaseErrorEvent

@property (nonatomic, readonly) NSString *eventName;

- (id)createPayload;
- (id)eventName;
- (id)init;

@end
