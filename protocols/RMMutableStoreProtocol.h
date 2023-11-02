
@protocol RMMutableStoreProtocol <RMStoreProtocol>

@required

- (void)applyChangesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteDeclarationWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveDeclaration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: RMModelDeclarationBase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)setMetadataValue:(id)arg1 forKey:(NSString *)arg2 error:(id*)arg3;

@end
