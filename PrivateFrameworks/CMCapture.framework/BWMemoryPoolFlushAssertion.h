
@interface BWMemoryPoolFlushAssertion : NSObject {
    NSString * _identifier;
    BWMemoryPool * _pool;
}

- (void)dealloc;

@end
