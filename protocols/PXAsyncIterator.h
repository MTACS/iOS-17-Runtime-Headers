
@protocol PXAsyncIterator <NSObject>

@required

- (unsigned long long)count;
- (unsigned long long)index;
- (void)next;
- (void)stop;

@end
