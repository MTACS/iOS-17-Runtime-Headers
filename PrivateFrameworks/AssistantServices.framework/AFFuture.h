
@interface AFFuture : NSObject {
    NSObject<OS_dispatch_group> * _group;
    id  _value;
}

- (void).cxx_destruct;
- (id)initAndGetSetterBlock:(id /* block */*)arg1;
- (id)waitForValue:(unsigned long long)arg1;

@end
