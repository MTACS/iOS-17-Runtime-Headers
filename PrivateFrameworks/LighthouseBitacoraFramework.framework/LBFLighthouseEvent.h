
@interface LBFLighthouseEvent : NSObject {
    NSNumber * _errorCode;
    NSString * _errorDomain;
    long long  _eventType;
    NSNumber * _succeeded;
}

@property (nonatomic, readonly) NSNumber *errorCode;
@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) NSNumber *succeeded;

- (void).cxx_destruct;
- (id)errorCode;
- (id)errorDomain;
- (long long)eventType;
- (id)initWithPerformTaskStatus:(bool)arg1 error:(id)arg2;
- (id)initWithPerformTrialTaskStatus:(bool)arg1 error:(id)arg2;
- (id)initWithStop:(bool)arg1 error:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)succeeded;

@end
