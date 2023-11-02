
@interface CUTWeakReference : NSObject {
    id  _object;
    unsigned long long  _objectAddress;
}

@property (nonatomic) id object;
@property (nonatomic) unsigned long long objectAddress;

+ (id)weakRefWithObject:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;
- (unsigned long long)objectAddress;
- (void)setObject:(id)arg1;
- (void)setObjectAddress:(unsigned long long)arg1;

@end
