
@protocol PFLTaskState <NSSecureCoding>

@required

- (void)resume:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <PFLTaskStateProvider> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PFLTaskState> *, void*
- (void)suspend;
- (unsigned long long)tag;

@end
