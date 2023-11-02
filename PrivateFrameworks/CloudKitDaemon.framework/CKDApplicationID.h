
@interface CKDApplicationID : NSObject <CKSQLiteItem, NSCopying> {
    NSString * _applicationBundleIdentifier;
    NSString * _applicationBundleIdentifierOverrideForContainerAccess;
    NSString * _applicationBundleIdentifierOverrideForNetworkAttribution;
    NSString * _applicationBundleIdentifierOverrideForPushTopicGeneration;
    NSString * _applicationBundleIdentifierOverrideForTCC;
}

@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifierOverrideForTCC;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)applicationBundleIdentifier;
- (id)applicationBundleIdentifierOverrideForContainerAccess;
- (id)applicationBundleIdentifierOverrideForNetworkAttribution;
- (id)applicationBundleIdentifierOverrideForPushTopicGeneration;
- (id)applicationBundleIdentifierOverrideForTCC;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (id)initWithApplicationBundleIdentifier:(id)arg1 applicationBundleIdentifierOverrideForContainerAccess:(id)arg2 applicationBundleIdentifierOverrideForNetworkAttribution:(id)arg3 applicationBundleIdentifierOverrideForPushTopicGeneration:(id)arg4 applicationBundleIdentifierOverrideForTCC:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithSqliteRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sqliteRepresentation;

@end
