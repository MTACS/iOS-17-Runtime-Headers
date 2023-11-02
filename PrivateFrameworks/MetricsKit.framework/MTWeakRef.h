
@interface MTWeakRef : NSObject {
    id  _value;
}

@property (nonatomic) id value;

- (void).cxx_destruct;
- (void)setValue:(id)arg1;
- (id)value;

@end
