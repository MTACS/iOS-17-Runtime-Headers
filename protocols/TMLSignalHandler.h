
@protocol TMLSignalHandler <NSObject>

@required

- (void)attach;
- (<TMLValue> *)callWithArguments:(NSArray *)arg1;
- (void)detach;

@end
