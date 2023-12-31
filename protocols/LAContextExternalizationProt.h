
@protocol LAContextExternalizationProt <NSObject>

@required

- (void)authMethodWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)externalizedContextWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@optional

- (void)forciblyInvalidate;
- (NSData *)synchronousExternalizedContextWithError:(id*)arg1;

@end
