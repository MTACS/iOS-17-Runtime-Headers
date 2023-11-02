
@interface _PFWeakReference : NSObject {
    id  _object;
    long long  _objectAddress;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
