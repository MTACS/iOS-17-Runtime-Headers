
@interface SCRCWeakReferenceContainer : NSObject <NSCopying> {
    id  _weakReference;
}

- (id)autoreleasedReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)strongReference;

@end
