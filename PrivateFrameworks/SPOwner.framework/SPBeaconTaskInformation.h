
@interface SPBeaconTaskInformation : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _commandIdentifier;
    NSError * _error;
    NSDate * _lastUpdated;
    NSString * _name;
    long long  _state;
}

@property (nonatomic, copy) NSUUID *commandIdentifier;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSDate *lastUpdated;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commandIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 lastUpdated:(id)arg2 error:(id)arg3 state:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)lastUpdated;
- (id)name;
- (void)setCommandIdentifier:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setName:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
