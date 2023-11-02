
@interface SXWeakReferenceObject : NSObject {
    id  _object;
}

@property (nonatomic, readonly) id object;

+ (id)withObject:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;

@end
