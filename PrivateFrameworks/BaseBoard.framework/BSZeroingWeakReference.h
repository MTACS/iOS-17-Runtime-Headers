
@interface BSZeroingWeakReference : NSObject {
    id  _object;
    unsigned long long  _objectAddress;
    Class  _objectClass;
}

@property (nonatomic, readonly) id object;

+ (id)referenceWithObject:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;

@end
