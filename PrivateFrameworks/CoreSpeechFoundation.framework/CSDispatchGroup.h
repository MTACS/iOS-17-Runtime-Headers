
@interface CSDispatchGroup : NSObject {
    NSObject<OS_dispatch_group> * _dispatchGroup;
    int  _dispatchGroupCounter;
}

- (void).cxx_destruct;
- (void)enter;
- (id)init;
- (void)leave;
- (long long)waitWithTimeout:(unsigned long long)arg1;

@end
