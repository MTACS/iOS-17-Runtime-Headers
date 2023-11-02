
@interface VSWaitGroup : NSObject {
    NSObject<OS_dispatch_group> * _group;
}

- (void).cxx_destruct;
- (void)enter;
- (id)init;
- (void)leave;
- (bool)wait;
- (bool)waitWithMilliseconds:(unsigned long long)arg1;

@end
