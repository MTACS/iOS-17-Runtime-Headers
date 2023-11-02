
@protocol MPMediaAPIMetadaRequestProtocol <NSObject>

@required

- (void)cancelRequest;
- (void)executeRequestWithBatchProgressHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPMediaAPICollectionItemMetadataResponse *, NSError *, void*
- (NSProgress *)progress;
- (NSUUID *)requestIdentifier;
- (long long)requestItemCount;
- (bool)shouldResolveRequestItemsLocally;

@end
