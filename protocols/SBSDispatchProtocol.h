
@protocol SBSDispatchProtocol <NSObject>

@required

- (void)async:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)sync:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
