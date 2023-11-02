
@interface STSAuxiliaryTransaction : NSObject <NSSecureCoding> {
    STSAuxiliaryCredential * _credential;
    NSError * _error;
}

@property (nonatomic, readonly) STSAuxiliaryCredential *credential;
@property (nonatomic, readonly) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)credential;
- (bool)didSucceed;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredential:(id)arg1 error:(id)arg2;

@end
