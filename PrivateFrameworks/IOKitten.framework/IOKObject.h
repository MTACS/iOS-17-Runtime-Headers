
@interface IOKObject : NSObject {
    unsigned int  _object;
}

@property (nonatomic, readonly, copy) NSString *ioClassName;
@property (nonatomic, readonly) unsigned int object;

+ (id)bundleIdentifierForClassName:(id)arg1;
+ (Class)classForRegistryEntry:(unsigned int)arg1;
+ (id)ioSuperClassNameForClassName:(id)arg1;

- (bool)conformsToIOClassName:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIOObject:(unsigned int)arg1;
- (id)ioClassName;
- (bool)isEqual:(id)arg1;
- (unsigned int)object;

@end
