
@interface PPSQLKVStore : NSObject

+ (id)loadBlobForKey:(id)arg1 transaction:(id)arg2;
+ (id)numberForKey:(id)arg1 transaction:(id)arg2;
+ (void)removeBlobForKey:(id)arg1 transaction:(id)arg2;
+ (void)setNumber:(id)arg1 forKey:(id)arg2 transaction:(id)arg3;
+ (void)setString:(id)arg1 forKey:(id)arg2 transaction:(id)arg3;
+ (void)storeBlob:(id)arg1 forKey:(id)arg2 transaction:(id)arg3;
+ (id)stringForKey:(id)arg1 transaction:(id)arg2;

@end
