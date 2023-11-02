
@interface DMFRemoveConfigurationRequest : DMFTaskRequest {
    NSDictionary * _profile;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSDictionary *profile;
@property (nonatomic) unsigned long long type;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)profile;
- (void)setProfile:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
