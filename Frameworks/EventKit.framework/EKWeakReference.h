
@interface EKWeakReference : NSObject {
    id  _value;
}

@property (nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
