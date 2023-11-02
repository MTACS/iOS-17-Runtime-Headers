
@interface DKDiagnosticAttributes : NSObject <DKExtensionAttributes> {
    NSString * _bundleIdentifier;
    NSExtension * _extension;
    NSNumber * _freeSpaceRequired;
    bool  _headless;
    NSNumber * _identifier;
    NSString * _name;
    bool  _requiresUnlock;
    bool  _restricted;
    NSString * _serviceName;
    NSArray * _supportedDevices;
    NSString * _version;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly) NSNumber *freeSpaceRequired;
@property (getter=isHeadless, nonatomic, readonly) bool headless;
@property (nonatomic, readonly) NSNumber *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool requiresUnlock;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSArray *supportedDevices;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)extension;
- (id)freeSpaceRequired;
- (id)identifier;
- (id)initWithExtension:(id)arg1;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2 freeSpaceRequired:(id)arg3 name:(id)arg4 serviceName:(id)arg5 headless:(bool)arg6;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2 name:(id)arg3 serviceName:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTo:(id)arg1;
- (bool)isEqualToAttributes:(id)arg1;
- (bool)isHeadless;
- (bool)isRestricted;
- (id)name;
- (bool)requiresUnlock;
- (id)serviceName;
- (id)supportedDevices;
- (id)version;

@end
