
@protocol PRDateObserving <NSObject>

@required

- (void)dateProvider:(id <PRDateProviding>)arg1 didUpdateDate:(NSDate *)arg2;

@end
