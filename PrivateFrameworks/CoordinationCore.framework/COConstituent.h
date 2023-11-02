
@interface COConstituent : NSObject <NSCopying, NSSecureCoding> {
    int  _device;
    unsigned long long  _flags;
    NSUUID * _identifier;
    NSString * _software;
    unsigned long long  _type;
}

@property (nonatomic) int device;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, retain) NSUUID *identifier;
@property (getter=isPowerRisk, nonatomic, readonly) bool powerRisk;
@property (nonatomic, copy) NSString *software;
@property (getter=isThermalRisk, nonatomic, readonly) bool thermalRisk;
@property (nonatomic, readonly) unsigned long long type;
@property (getter=isWired, nonatomic, readonly) bool wired;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)device;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flags;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPowerRisk;
- (bool)isThermalRisk;
- (bool)isWired;
- (void)setDevice:(int)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSoftware:(id)arg1;
- (id)software;
- (bool)supportsBackoff;
- (unsigned long long)type;

@end
