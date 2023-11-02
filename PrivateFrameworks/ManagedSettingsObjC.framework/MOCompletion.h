
@interface MOCompletion : NSObject {
    NSError * _error;
    unsigned long long  _state;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long state;

+ (id)failureWithError:(id)arg1;
+ (id)success;

- (void).cxx_destruct;
- (id)error;
- (id)initWithState:(unsigned long long)arg1 error:(id)arg2;
- (unsigned long long)state;

@end
