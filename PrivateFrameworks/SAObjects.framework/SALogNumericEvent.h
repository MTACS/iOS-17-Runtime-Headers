
@interface SALogNumericEvent : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, copy) NSString *eventOperation;
@property (nonatomic, copy) NSNumber *eventValue;

+ (id)logNumericEvent;
+ (id)logNumericEventWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)eventName;
- (id)eventOperation;
- (id)eventValue;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setEventName:(id)arg1;
- (void)setEventOperation:(id)arg1;
- (void)setEventValue:(id)arg1;

@end
