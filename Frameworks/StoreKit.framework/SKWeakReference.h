
@interface SKWeakReference : NSObject {
    id  _object;
}

@property (nonatomic) id object;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;

@end
