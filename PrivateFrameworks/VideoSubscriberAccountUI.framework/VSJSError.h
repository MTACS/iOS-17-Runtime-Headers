
@interface VSJSError : IKJSObject <VSJSError> {
    unsigned long long  _code;
    NSString * _message;
}

@property (nonatomic) unsigned long long code;
@property (nonatomic, copy) NSString *message;

- (void).cxx_destruct;
- (unsigned long long)code;
- (id)description;
- (id)error;
- (id)init;
- (id)message;
- (void)setCode:(unsigned long long)arg1;
- (void)setMessage:(id)arg1;

@end
