
@interface ASCLockupFeatureSafariExtension : NSObject <ASCLockupFeature> {
    NSString * _contentProviderTeamID;
}

@property (nonatomic, readonly, copy) NSString *contentProviderTeamID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentProviderTeamID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentProviderTeamID:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
