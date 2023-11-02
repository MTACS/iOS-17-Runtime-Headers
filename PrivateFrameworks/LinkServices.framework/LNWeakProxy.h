
@interface LNWeakProxy : NSObject {
    id  _value;
    id /* block */  _wrapper;
}

@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 wrapper:(id /* block */)arg2;
- (id)value;

@end
