
@interface NSCTRubyAnnotation : NSRubyAnnotation

+ (Class)classForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (unsigned long long)_cfTypeID;
- (bool)allowsWeakReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;

@end
