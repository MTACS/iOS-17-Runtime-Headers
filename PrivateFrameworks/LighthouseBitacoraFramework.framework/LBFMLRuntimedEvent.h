
@interface LBFMLRuntimedEvent : NSObject {
    NSNumber * _errorCode;
    NSString * _errorDomain;
    long long  _eventType;
    NSNumber * _scheduled;
    NSNumber * _succeeded;
}

@property (nonatomic, readonly) NSNumber *errorCode;
@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) NSNumber *scheduled;
@property (nonatomic, readonly) NSNumber *succeeded;

- (void).cxx_destruct;
- (id)errorCode;
- (id)errorDomain;
- (long long)eventType;
- (id)initWithScheduleStatus:(bool)arg1;
- (id)initWithTaskCompleted:(bool)arg1 error:(id)arg2;
- (id)initWithTaskFetched:(bool)arg1 error:(id)arg2;
- (id)initWithTaskScheduled:(bool)arg1 error:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)scheduled;
- (id)succeeded;

@end
