
@protocol HDSynchronousTaskGroupDelegate <NSObject>

@required

- (void)synchronousTaskGroup:(HDSynchronousTaskGroup *)arg1 didFinishWithSuccess:(bool)arg2 errors:(NSArray *)arg3;

@end
