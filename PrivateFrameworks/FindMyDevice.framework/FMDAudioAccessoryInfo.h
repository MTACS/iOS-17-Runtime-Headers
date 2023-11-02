
@interface FMDAudioAccessoryInfo : NSObject <NSSecureCoding> {
    NSString * _leftSerialNumber;
    NSString * _rightSerialNumber;
    NSString * _systemSerialNumber;
}

@property (nonatomic, copy) NSString *leftSerialNumber;
@property (nonatomic, copy) NSString *rightSerialNumber;
@property (nonatomic, copy) NSString *systemSerialNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystemSerialNumber:(id)arg1 leftSerialNumber:(id)arg2 rightSerialNumber:(id)arg3;
- (id)leftSerialNumber;
- (id)rightSerialNumber;
- (void)setLeftSerialNumber:(id)arg1;
- (void)setRightSerialNumber:(id)arg1;
- (void)setSystemSerialNumber:(id)arg1;
- (id)systemSerialNumber;

@end
