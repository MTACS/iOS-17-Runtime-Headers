
@interface SSPurchasableItem : NSObject {
    SSSQLiteDatabase * _database;
    NSDictionary * _propertyValues;
    NSString * _tableName;
}

+ (id)allPropertyKeys;
+ (id)databaseTable;
+ (id)sortByDatePurchasedKey;

- (long long)accountUniqueIdentifier;
- (id)datePurchased;
- (void)dealloc;
- (id)description;
- (id)initWithPropertyValues:(id)arg1;
- (bool)isHidden;
- (long long)pid;
- (id)propertyValues;
- (long long)storeID;

@end
