
@interface NSKnownKeysMappingStrategy : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding>

@property (nonatomic, readonly) id*keys;
@property (nonatomic, readonly) unsigned long long length;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fastIndexForKnownKey:(id)arg1;
- (unsigned long long)indexForKey:(id)arg1;
- (id)initForKeys:(id)arg1;
- (id)initForKeys:(id*)arg1 count:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id*)keys;
- (unsigned long long)length;

@end
