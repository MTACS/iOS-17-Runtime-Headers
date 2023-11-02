
@interface EMMessageDeliveryResult : NSObject <NSSecureCoding> {
    NSError * _error;
    long long  _status;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 error:(id)arg2;
- (long long)status;

@end
