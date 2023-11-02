
@interface ASKAtomicBox : NSObject {
    id  _value;
}

@property (retain) id value;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
