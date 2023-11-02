
@protocol KeyedDataSource

@required

- (NSArray *)arrayForKey:(NSString *)arg1;
- (NSURL *)assetURLForKey:(NSString *)arg1;
- (NSData *)dataForKey:(NSString *)arg1;
- (NSDictionary *)dictForKey:(NSString *)arg1;
- (NSNumber *)numberForKey:(NSString *)arg1;
- (NSString *)sourceRecordChangeTag;
- (NSString *)sourceRecordName;
- (NSString *)sourceRecordType;
- (NSString *)stringForKey:(NSString *)arg1;

@end
