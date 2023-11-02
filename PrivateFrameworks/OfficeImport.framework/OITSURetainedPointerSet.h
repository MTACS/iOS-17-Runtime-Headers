
@interface OITSURetainedPointerSet : OITSUPointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)allObjects;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;

@end
