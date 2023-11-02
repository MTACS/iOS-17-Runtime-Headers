
@interface SPRInstallData : NSObject <NSSecureCoding> {
    NSString * _countryCode;
    NSArray * _kernelsInstalled;
}

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly, copy) NSArray *kernelsInstalled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)countryCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKernelsInstalled:(id)arg1;
- (id)initWithKernelsInstalled:(id)arg1 countryCode:(id)arg2;
- (id)kernelsInstalled;

@end
