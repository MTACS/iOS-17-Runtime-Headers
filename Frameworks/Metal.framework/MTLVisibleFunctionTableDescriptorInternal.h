
@interface MTLVisibleFunctionTableDescriptorInternal : MTLVisibleFunctionTableDescriptor {
    struct MTLVisibleFunctionTableDescriptorPrivate { 
        unsigned long long functionCount; 
        bool forceResourceIndex; 
        unsigned long long resourceIndex; 
    }  _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)forceResourceIndex;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)functionCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)resourceIndex;
- (void)setForceResourceIndex:(bool)arg1;
- (void)setFunctionCount:(unsigned long long)arg1;
- (void)setResourceIndex:(unsigned long long)arg1;

@end
