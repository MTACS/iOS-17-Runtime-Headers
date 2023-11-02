
@interface BPSPartialCompletion : NSObject {
    NSError * _error;
    long long  _state;
    id  _value;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) id value;

+ (id)new;
+ (id)withState:(long long)arg1;
+ (id)withState:(long long)arg1 error:(id)arg2;
+ (id)withState:(long long)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)error;
- (id)init;
- (id)initWithState:(long long)arg1 value:(id)arg2 error:(id)arg3;
- (long long)state;
- (id)value;

@end
