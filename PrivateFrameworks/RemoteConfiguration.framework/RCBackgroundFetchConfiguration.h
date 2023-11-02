
@interface RCBackgroundFetchConfiguration : NSObject {
    NSDate * _earliestBeginDate;
    NSString * _sessionIdentifier;
    NSString * _sharedContainerIdentifier;
    NSString * _taskIdentifier;
    double  _timeout;
}

@property (nonatomic, retain) NSDate *earliestBeginDate;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (nonatomic, retain) NSString *sharedContainerIdentifier;
@property (nonatomic, retain) NSString *taskIdentifier;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)earliestBeginDate;
- (id)initWithTaskIdentifier:(id)arg1 sessionIdentifier:(id)arg2 sharedContainerIdentifier:(id)arg3 earliestBeginDate:(id)arg4 timeout:(double)arg5;
- (id)sessionIdentifier;
- (void)setEarliestBeginDate:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSharedContainerIdentifier:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (void)setTimeout:(double)arg1;
- (id)sharedContainerIdentifier;
- (id)taskIdentifier;
- (double)timeout;

@end
