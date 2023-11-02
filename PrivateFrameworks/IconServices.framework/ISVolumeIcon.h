
@interface ISVolumeIcon : ISConcreteIcon {
    NSString * _kextBundleIdentifier;
    NSString * _kextIconName;
    unsigned int  _typeCode;
}

@property (readonly) NSString *kextBundleIdentifier;
@property (readonly) NSString *kextIconName;
@property (readonly) unsigned int typeCode;

- (void).cxx_destruct;
- (id)kextBundleIdentifier;
- (id)kextIconName;
- (unsigned int)typeCode;

@end
