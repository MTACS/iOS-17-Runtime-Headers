
@interface SALogStringEvent : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, copy) NSString *eventValue;

+ (id)logStringEvent;
+ (id)logStringEventWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)eventName;
- (id)eventValue;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setEventName:(id)arg1;
- (void)setEventValue:(id)arg1;

@end
