
@interface DKReporterAttributes : NSObject <DKExtensionAttributes, NSCopying> {
    NSString * _bundleIdentifier;
    NSExtension * _extension;
    bool  _headless;
    NSSet * _manifest;
    NSString * _name;
    NSUUID * _uuid;
    NSString * _version;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSExtension *extension;
@property (getter=isHeadless, nonatomic, readonly) bool headless;
@property (nonatomic, readonly) NSSet *manifest;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (void)_validateAndAddDomain:(id)arg1 withInfo:(id)arg2 toManifest:(id)arg3;
- (void)_validateAndAddExtensionManifest:(id)arg1 toManifest:(id)arg2;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extension;
- (unsigned long long)hash;
- (id)initWithExtension:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReportGeneratorAttributes:(id)arg1;
- (bool)isHeadless;
- (id)manifest;
- (id)name;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (id)version;

@end
