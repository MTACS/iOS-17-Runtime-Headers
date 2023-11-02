
@interface CMLUseCaseStatus : NSObject <NSSecureCoding> {
    NSDate * _keyExpirationTime;
    NSDate * _keyGenerationTime;
    NSDate * _lastUsed;
    NSData * _serializedDynamicConfig;
    unsigned long long  _status;
    NSString * _useCase;
}

@property (nonatomic, readonly, copy) NSDate *keyExpirationTime;
@property (nonatomic, readonly, copy) NSDate *keyGenerationTime;
@property (nonatomic, readonly, copy) NSDate *lastUsed;
@property (nonatomic, readonly, copy) NSData *serializedDynamicConfig;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly, copy) NSString *useCase;

+ (id)createConnection;
+ (void)requestStatusForUseCases:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)requestStatusForUseCases:(id)arg1 options:(unsigned long long)arg2 dispatchQueue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)statusForUseCases:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUseCase:(id)arg1 serializedDynamicConfig:(id)arg2 lastUsed:(id)arg3 keyGenerationTime:(id)arg4 keyExpirationTime:(id)arg5 status:(unsigned long long)arg6;
- (id)keyExpirationTime;
- (id)keyGenerationTime;
- (id)lastUsed;
- (id)serializedDynamicConfig;
- (unsigned long long)status;
- (id)useCase;

@end
