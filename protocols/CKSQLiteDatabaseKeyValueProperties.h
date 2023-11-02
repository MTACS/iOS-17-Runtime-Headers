
@protocol CKSQLiteDatabaseKeyValueProperties

@required

- (NSUUID *)UUIDValueForKey:(NSString *)arg1 error:(id*)arg2;
- (NSData *)dataValueForKey:(NSString *)arg1 error:(id*)arg2;
- (NSDate *)dateValueForKey:(NSString *)arg1 error:(id*)arg2;
- (NSNumber *)numberValueForKey:(NSString *)arg1 error:(id*)arg2;
- (NSObject<NSCoding> *)objectValueForKey:(NSString *)arg1 error:(id*)arg2;
- (NSError *)setDataValue:(NSData *)arg1 forKey:(NSString *)arg2;
- (NSError *)setDateValue:(NSDate *)arg1 forKey:(NSString *)arg2;
- (NSError *)setNumberValue:(NSNumber *)arg1 forKey:(NSString *)arg2;
- (NSError *)setObjectValue:(NSObject<NSCoding> *)arg1 forKey:(NSString *)arg2;
- (NSError *)setStringValue:(NSString *)arg1 forKey:(NSString *)arg2;
- (NSError *)setUUIDValue:(NSUUID *)arg1 forKey:(NSString *)arg2;
- (NSString *)stringValueForKey:(NSString *)arg1 error:(id*)arg2;

@end
