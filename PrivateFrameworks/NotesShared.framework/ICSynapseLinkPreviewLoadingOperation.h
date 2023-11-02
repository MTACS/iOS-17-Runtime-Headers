
@interface ICSynapseLinkPreviewLoadingOperation : NSObject {
    id /* block */  _completionBlock;
    SYContentItem * _synapseItem;
}

- (void).cxx_destruct;
- (id)initWithSynapseItem:(id)arg1;
- (void)linkPreviewDidFinishLoading:(id)arg1;
- (void)loadPreviewWithCompletionBlock:(id /* block */)arg1;

@end
