
@interface HKMedicationDisplayNameComponents : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayStrength;
    NSString * _fullDisplayName;
    NSString * _medicationDisplayName;
}

@property (nonatomic, readonly, copy) NSString *displayStrength;
@property (nonatomic, readonly, copy) NSString *fullDisplayName;
@property (nonatomic, readonly, copy) NSString *medicationDisplayName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayStrength;
- (void)encodeWithCoder:(id)arg1;
- (id)fullDisplayName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullDisplayName:(id)arg1 medicationDisplayName:(id)arg2 displayStrength:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)medicationDisplayName;

@end
