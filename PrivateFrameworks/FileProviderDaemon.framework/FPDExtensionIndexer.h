
@interface FPDExtensionIndexer : FPDDomainIndexer

- (void)dropIndexForDomainRemoval:(bool)arg1 completion:(id /* block */)arg2;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)arg1;

@end
