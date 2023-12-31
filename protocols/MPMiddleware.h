
@protocol MPMiddleware <NSObject>

@required

- (NSArray *)invalidationObservers;
- (NSArray *)operationsForRequest:(MPRequest *)arg1;
- (void)setInvalidationObservers:(NSArray *)arg1;

@end
