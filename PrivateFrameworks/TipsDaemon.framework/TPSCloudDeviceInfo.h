
@interface TPSCloudDeviceInfo : TPSSerializableObject {
    NSString * _displayName;
    NSString * _maxOSVersion;
    NSString * _minOSVersion;
    NSString * _model;
    NSString * _symbolIdentifier;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *maxOSVersion;
@property (nonatomic, copy) NSString *minOSVersion;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *symbolIdentifier;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)displayName;
- (id)initWithDictionary:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)maxOSVersion;
- (id)minOSVersion;
- (id)model;
- (void)setDisplayName:(id)arg1;
- (void)setMaxOSVersion:(id)arg1;
- (void)setMinOSVersion:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setSymbolIdentifier:(id)arg1;
- (id)symbolIdentifier;

@end
