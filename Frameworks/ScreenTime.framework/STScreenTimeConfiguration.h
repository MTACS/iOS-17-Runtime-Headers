
@interface STScreenTimeConfiguration : NSObject <NSSecureCoding> {
    bool  _enforcesChildRestrictions;
}

@property bool enforcesChildRestrictions;

+ (bool)supportsSecureCoding;

- (void)_stScreenTimeConfigurationCommonInitWithEnforcesChildRestrictions:(bool)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)enforcesChildRestrictions;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnforcesChildRestrictions:(bool)arg1;
- (void)setEnforcesChildRestrictions:(bool)arg1;

@end
