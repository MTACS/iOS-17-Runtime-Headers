
@interface NTKBundleComplicationDataSourceInfo : NSObject {
    NSString * _appGroupIdentifier;
    NSString * _appIdentifier;
    NSString * _bundleIdentifier;
    Class  _dataSourceClass;
    unsigned long long  _hash;
    NSNumber * _legacyNTKComplicationType;
    NSString * _localizedAppName;
    NSString * _localizedComplicationName;
    NSString * _sectionIdentifier;
    bool  _useComplicationDescriptorsOnCompanion;
}

@property (nonatomic, readonly) NSString *appGroupIdentifier;
@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) Class dataSourceClass;
@property (nonatomic, readonly) NSNumber *legacyNTKComplicationType;
@property (nonatomic, readonly) NSString *localizedAppName;
@property (nonatomic, readonly) NSString *localizedComplicationName;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (nonatomic, readonly) bool useComplicationDescriptorsOnCompanion;

- (void).cxx_destruct;
- (id)appGroupIdentifier;
- (id)appIdentifier;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)dataSourceClass;
- (unsigned long long)hash;
- (id)initWithDataSourceClass:(Class)arg1;
- (bool)isEqual:(id)arg1;
- (id)legacyNTKComplicationType;
- (id)localizedAppName;
- (id)localizedComplicationName;
- (id)sectionIdentifier;
- (bool)useComplicationDescriptorsOnCompanion;

@end
