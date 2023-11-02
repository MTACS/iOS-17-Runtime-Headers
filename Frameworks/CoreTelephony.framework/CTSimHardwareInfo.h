
@interface CTSimHardwareInfo : NSObject <NSSecureCoding> {
    long long  _hardwareType;
    long long  _simLocation;
}

@property (nonatomic) long long hardwareType;
@property (nonatomic) long long simLocation;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hardwareType;
- (id)initWithCoder:(id)arg1;
- (id)initWithHardwareInfo:(long long)arg1 simLocation:(long long)arg2;
- (void)setHardwareType:(long long)arg1;
- (void)setSimLocation:(long long)arg1;
- (long long)simLocation;

@end
