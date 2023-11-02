
@protocol SUCoreConnectPolicyProtocol <NSObject>

@required

+ (NSSet *)getAllowlistedClassesForKey:(NSString *)arg1;
+ (void)setAllowlistedClass:(Class)arg1 forKey:(NSString *)arg2;
+ (void)setAllowlistedClasses:(NSSet *)arg1 forKey:(NSString *)arg2;
+ (void)setAllowlistedClasses:(NSSet *)arg1 forKeys:(NSSet *)arg2;

@end
