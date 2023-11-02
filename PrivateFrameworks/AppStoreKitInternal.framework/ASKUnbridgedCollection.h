
@interface ASKUnbridgedCollection : NSObject {
    id  _collection;
}

@property (nonatomic, readonly) id collection;

- (void).cxx_destruct;
- (id)collection;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCollection:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
