
@interface NSBlock : NSObject <NSCopying>

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)invoke;
- (void)performAfterDelay:(double)arg1;

@end
