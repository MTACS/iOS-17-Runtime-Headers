
@protocol CPLPullChangeSessionImplementation <CPLChangeSessionImplementation>

@required

- (void)acknowledgeChangeBatch:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: CPLChangeBatch *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)getChangeBatchWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, CPLChangeBatch *, void*

@end
