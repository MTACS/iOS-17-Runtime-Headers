
@interface IRNode : NSObject <NSCopying, NSSecureCoding> {
    NSString * _avOutpuDeviceIdentifier;
    NSString * _idsIdentifier;
    NSString * _name;
    NSString * _rapportIdentifier;
}

@property (nonatomic, retain) NSString *avOutpuDeviceIdentifier;
@property (nonatomic, retain) NSString *idsIdentifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *rapportIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)avOutpuDeviceIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idsIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)rapportIdentifier;
- (void)setAvOutpuDeviceIdentifier:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRapportIdentifier:(id)arg1;

@end
