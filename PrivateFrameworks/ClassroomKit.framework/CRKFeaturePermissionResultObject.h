
@interface CRKFeaturePermissionResultObject : NSObject <NSSecureCoding> {
    bool  _modifiable;
    unsigned long long  _permission;
}

@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (getter=isModifiable, nonatomic) bool modifiable;
@property (nonatomic) unsigned long long permission;

+ (bool)supportsSecureCoding;

- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isModifiable;
- (unsigned long long)permission;
- (void)setModifiable:(bool)arg1;
- (void)setPermission:(unsigned long long)arg1;

@end