
@interface DMFConfigurationOrganization : NSObject <NSSecureCoding> {
    bool  _active;
    NSString * _displayName;
    NSString * _identifier;
    NSArray * _registeredConfigurationSources;
    NSString * _type;
}

@property (nonatomic) bool active;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *registeredConfigurationSources;
@property (nonatomic, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)active;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)registeredConfigurationSources;
- (void)setActive:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRegisteredConfigurationSources:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
