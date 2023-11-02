
@interface WFReminderAccessResource : WFCalendarAccessResource

+ (bool)isSystemResource;

- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;

@end
