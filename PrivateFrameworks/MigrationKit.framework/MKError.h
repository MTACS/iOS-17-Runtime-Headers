
@interface MKError : NSError {
    NSString * _message;
}

@property (nonatomic, copy) NSString *message;

- (void).cxx_destruct;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (id)message;
- (void)setMessage:(id)arg1;

@end
