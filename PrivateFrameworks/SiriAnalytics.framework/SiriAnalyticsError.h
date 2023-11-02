
@interface SiriAnalyticsError : NSError {
    unsigned long long  _errorType;
    NSString * _message;
}

@property (nonatomic, readonly) unsigned long long errorType;
@property (nonatomic, readonly) NSString *message;

- (void).cxx_destruct;
- (unsigned long long)errorType;
- (id)init;
- (id)initWithErrorType:(unsigned long long)arg1 message:(id)arg2;
- (id)message;

@end
