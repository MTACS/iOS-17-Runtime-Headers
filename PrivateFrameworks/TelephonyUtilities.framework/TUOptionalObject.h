
@interface TUOptionalObject : NSObject {
    id  _value;
}

@property (nonatomic, readonly, copy) id value;

- (void).cxx_destruct;
- (id)initWithValue:(id)arg1;
- (id)value;

@end
