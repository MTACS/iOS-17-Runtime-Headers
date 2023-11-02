
@interface ACUISOpenApplicationAction : BSAction

@property (readonly) NSSet *launchActions;

- (id)init;
- (id)initWithNSUserActivity:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)launchActions;

@end
