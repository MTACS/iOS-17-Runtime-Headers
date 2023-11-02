
@interface SUInstallOptions : SUOptionsBase <NSCopying, NSSecureCoding> {
    bool  _automaticInstallation;
    NSString * _clientName;
    bool  _darkBoot;
    unsigned long long  _ignorableConstraints;
    bool  _managed;
    bool  _required;
    bool  _skipActivationCheck;
}

@property (nonatomic) bool automaticInstallation;
@property (nonatomic, retain) NSString *clientName;
@property (getter=isDarkBoot, nonatomic) bool darkBoot;
@property (nonatomic) unsigned long long ignorableConstraints;
@property (getter=isManaged, nonatomic) bool managed;
@property (getter=isRequired, nonatomic) bool required;
@property (nonatomic) bool skipActivationCheck;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)automaticInstallation;
- (id)clientName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)ignorableConstraints;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDarkBoot;
- (bool)isManaged;
- (bool)isRequired;
- (void)setAutomaticInstallation:(bool)arg1;
- (void)setClientName:(id)arg1;
- (void)setDarkBoot:(bool)arg1;
- (void)setIgnorableConstraints:(unsigned long long)arg1;
- (void)setManaged:(bool)arg1;
- (void)setRequired:(bool)arg1;
- (void)setSkipActivationCheck:(bool)arg1;
- (bool)skipActivationCheck;

@end
