
@protocol HKComparisonFilter <NSObject>

@required

+ (id)filterForKeyPath:(NSString *)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(NSSet *)arg4;
+ (id)filterForKeyPath:(NSString *)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(NSSet *)arg4 isSubpredicate:(bool)arg5;

@end
