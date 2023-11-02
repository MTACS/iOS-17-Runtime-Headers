
@protocol PKCloudStoreCoding <NSSecureCoding>

@required

+ (NSString *)recordNamePrefix;

- (void)applyPropertiesFromCloudStoreRecord:(PKCloudStoreRecord *)arg1;
- (void)encodeWithCloudStoreCoder:(PKCloudStoreRecord *)arg1 codingType:(unsigned long long)arg2;
- (id)initWithCloudStoreCoder:(PKCloudStoreRecord *)arg1;
- (unsigned long long)itemType;
- (NSString *)primaryIdentifier;
- (NSArray *)recordTypesAndNamesForCodingType:(unsigned long long)arg1;

@optional

- (void)setSystemFieldsMetata:(NSData *)arg1 forCloudStoreWithIdentifier:(NSString *)arg2;
- (NSData *)systemFieldsDataForCloudStoreWithIdentifier:(NSString *)arg1;
- (bool)wasAchivedInCloudStoreWithIdentifier:(NSString *)arg1;

@end
