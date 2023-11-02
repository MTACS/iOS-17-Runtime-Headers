
@interface WFNetworkEvent : NSObject {
    double  _DNSDuration;
    unsigned long long  _HTTPStatusCode;
    double  _connectDuration;
    long long  _errorCode;
    long long  _eventType;
    double  _requestDuration;
    double  _responseDuration;
    unsigned long long  _responseSize;
    NSDate * _startDate;
}

@property (nonatomic, readonly) double DNSDuration;
@property (nonatomic, readonly) unsigned long long HTTPStatusCode;
@property (nonatomic, readonly) double connectDuration;
@property (nonatomic, readonly) long long errorCode;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) double requestDuration;
@property (nonatomic, readonly) double responseDuration;
@property (nonatomic, readonly) unsigned long long responseSize;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (double)DNSDuration;
- (unsigned long long)HTTPStatusCode;
- (double)connectDuration;
- (long long)errorCode;
- (long long)eventType;
- (id)initWithEventType:(long long)arg1 metrics:(id)arg2;
- (id)initWithEventType:(long long)arg1 startDate:(id)arg2 DNSDuration:(double)arg3 connectDuration:(double)arg4 requestDuration:(double)arg5 responseDuration:(double)arg6 responseSize:(unsigned long long)arg7 HTTPStatusCode:(unsigned long long)arg8 errorCode:(long long)arg9;
- (id)initWithEventType:(long long)arg1 startDate:(id)arg2 error:(id)arg3;
- (double)requestDuration;
- (double)responseDuration;
- (unsigned long long)responseSize;
- (id)startDate;

@end
