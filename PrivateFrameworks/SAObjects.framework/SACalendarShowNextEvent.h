
@interface SACalendarShowNextEvent : SABaseClientBoundCommand

+ (id)showNextEvent;
+ (id)showNextEventWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
