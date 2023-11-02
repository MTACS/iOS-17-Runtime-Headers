
@interface NSCFCharacterSet : NSMutableCharacterSet

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)addCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addCharactersInString:(id)arg1;
- (bool)allowsWeakReference;
- (id)bitmapRepresentation;
- (bool)characterIsMember:(unsigned short)arg1;
- (Class)classForArchiver;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (bool)hasMemberInPlane:(unsigned char)arg1;
- (unsigned long long)hash;
- (void)invert;
- (id)invertedSet;
- (bool)isEqual:(id)arg1;
- (bool)isSupersetOfSet:(id)arg1;
- (bool)longCharacterIsMember:(unsigned int)arg1;
- (void)makeCharacterSetCompact;
- (void)makeCharacterSetFast;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeCharactersInString:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;

@end