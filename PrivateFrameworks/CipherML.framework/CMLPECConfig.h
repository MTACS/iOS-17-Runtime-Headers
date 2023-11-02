
@interface CMLPECConfig : NSObject <NSSecureCoding> {
    NSData * _serializedKeyStatus;
    NSData * _serializedPECConfig;
}

@property (nonatomic, readonly, copy) NSData *serializedKeyStatus;
@property (nonatomic, readonly, copy) NSData *serializedPECConfig;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPECConfig:(id)arg1 keyStatus:(id)arg2;
- (id)serializedKeyStatus;
- (id)serializedPECConfig;

@end
