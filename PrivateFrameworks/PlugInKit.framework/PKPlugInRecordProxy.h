
@interface PKPlugInRecordProxy : NSObject <PKPlugInRecordProxy> {
    LSApplicationExtensionRecord * _lsRecord;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;
@property (readonly) <PKPlugInProxy> *compatibilityObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <PKPropertyList> *entitlements;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (nonatomic, retain) LSApplicationExtensionRecord *lsRecord;
@property (readonly) Class superclass;
@property (readonly) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)compatibilityObject;
- (id)entitlements;
- (id)initWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithUUID:(id)arg1 error:(id*)arg2;
- (id)localizedName;
- (id)localizedShortName;
- (id)lsRecord;
- (void)setLsRecord:(id)arg1;
- (id)uniqueIdentifier;

@end
