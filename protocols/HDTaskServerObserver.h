
@protocol HDTaskServerObserver

@required

- (void)didCreateTaskServer:(id <HDTaskServer>)arg1;
- (void)didInvalidateTaskServer:(id <HDTaskServer>)arg1;

@end
