
@interface NFMemoryObserver : NSObject {
    NSObject<OS_dispatch_source> * _source;
}

- (void).cxx_destruct;
- (void)start;
- (void)stop;

@end
