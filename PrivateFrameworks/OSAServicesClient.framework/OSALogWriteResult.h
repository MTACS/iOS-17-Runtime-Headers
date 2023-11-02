
@interface OSALogWriteResult : NSObject <NSSecureCoding> {
    NSError * _error;
    NSString * _filePath;
    OSALogIdentity * _identity;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) OSALogIdentity *identity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)filePath;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1 error:(id)arg2;
- (id)initWithIdentity:(id)arg1 filePath:(id)arg2;

@end
