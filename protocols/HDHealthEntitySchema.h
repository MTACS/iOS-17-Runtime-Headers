
@protocol HDHealthEntitySchema <HDSQLiteEntitySchema>

@required

+ (NSString *)createTableSQLWithBehavior:(_HKBehavior *)arg1;
+ (NSArray *)indicesWithBehavior:(_HKBehavior *)arg1;
+ (long long)protectionClass;
+ (NSArray *)triggersWithBehavior:(_HKBehavior *)arg1;

@optional

+ (NSNumber *)pruneWithProfile:(HDProfile *)arg1 nowDate:(NSDate *)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;

@end
