
@protocol BMStreamValidating <NSObject>

@required

- (bool)isCompleteWithContext:(BMEventContext *)arg1 error:(id*)arg2;
- (bool)isValidWithContext:(BMEventContext *)arg1 error:(id*)arg2;

@end
