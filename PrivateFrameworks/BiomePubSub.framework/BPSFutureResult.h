
@interface BPSFutureResult : NSObject {
    NSError * _error;
    long long  _state;
    id  _value;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) id value;

+ (id)failureWithError:(id)arg1;
+ (id)successWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)error;
- (id)initWithState:(long long)arg1 value:(id)arg2 error:(id)arg3;
- (long long)state;
- (id)value;

@end
