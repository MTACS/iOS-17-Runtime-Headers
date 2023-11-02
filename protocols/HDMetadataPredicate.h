
@protocol HDMetadataPredicate <NSObject>

@required

+ (HDSQLitePredicate *)predicateWithMetadataKey:(NSString *)arg1 allowedValues:(NSSet *)arg2;
+ (HDSQLitePredicate *)predicateWithMetadataKey:(NSString *)arg1 exists:(bool)arg2;
+ (HDSQLitePredicate *)predicateWithMetadataKey:(NSString *)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3;

@end
