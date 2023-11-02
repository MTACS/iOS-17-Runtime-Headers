
@interface VNWeakTypeWrapper : NSObject {
    id  _weakObject;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectAndReturnError:(id*)arg1;

@end
