
@interface FCURLRequest : NSObject {
    NSURLRequest * _URLRequest;
    id /* block */  _completion;
    NSDate * _dateInitiated;
    long long  _destination;
    NSString * _loggingKey;
    long long  _priority;
    long long  _remainingRetries;
}

- (void).cxx_destruct;
- (id)description;

@end
