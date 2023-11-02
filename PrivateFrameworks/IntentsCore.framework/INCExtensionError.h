
@interface INCExtensionError : NSObject {
    long long  _errorCode;
    NSError * _underlyingError;
}

@property (nonatomic) long long errorCode;
@property (nonatomic, copy) NSError *underlyingError;

- (void).cxx_destruct;
- (long long)errorCode;
- (id)initWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)setErrorCode:(long long)arg1;
- (void)setUnderlyingError:(id)arg1;
- (id)underlyingError;

@end
