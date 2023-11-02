
@protocol PFOperationScheduleStorage

@required

- (NSDate *)lastExecutionOf:(NSString *)arg1;
- (void)recordExecutionOf:(NSString *)arg1 at:(NSDate *)arg2;

@end
