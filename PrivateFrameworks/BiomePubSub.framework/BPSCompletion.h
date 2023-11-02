
@interface BPSCompletion : NSObject {
    NSError * _error;
    long long  _state;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long state;

+ (id)failureWithError:(id)arg1;
+ (id)new;
+ (id)success;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithState:(long long)arg1 error:(id)arg2;
- (long long)state;

@end
