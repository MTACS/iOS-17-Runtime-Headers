
@interface NSStringAccessibility : __NSStringAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithString:(id)arg1;
- (id)lowercaseStringWithLocale:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)uppercaseStringWithLocale:(id)arg1;

@end
