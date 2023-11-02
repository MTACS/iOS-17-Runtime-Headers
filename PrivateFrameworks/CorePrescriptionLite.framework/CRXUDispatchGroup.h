
@interface CRXUDispatchGroup : NSObject {
    NSObject<OS_dispatch_group> * _group;
    NSString * _name;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_group> *group;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)enter;
- (id)group;
- (id)initWithName:(id)arg1;
- (void)leave;
- (id)name;
- (void)notifyOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (void)onQueue:(id)arg1 dispatchAsync:(id /* block */)arg2;
- (void)wait;
- (bool)waitFor:(double)arg1;

@end
