
@interface OITSUMutableRetainedPointerSet : OITSUMutablePointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)allObjects;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;

@end
