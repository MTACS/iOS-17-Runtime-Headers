
@interface _NCWidgetControllerRequestLimiter : NSObject {
    bool  _isThrottled;
    NSDate * _lastRequestDate;
    long long  _requestCount;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)isRequestPermitted;

@end
