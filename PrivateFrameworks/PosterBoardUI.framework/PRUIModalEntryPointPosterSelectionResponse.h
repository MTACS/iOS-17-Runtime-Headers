
@interface PRUIModalEntryPointPosterSelectionResponse : PRUIModalEntryPointResponse {
    NSUUID * _configurationUUID;
}

@property (nonatomic, readonly) NSUUID *configurationUUID;

- (void).cxx_destruct;
- (id)configurationUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithResult:(long long)arg1 configurationUUID:(id)arg2;

@end
