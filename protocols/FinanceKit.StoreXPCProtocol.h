
@protocol FinanceKit.StoreXPCProtocol

@required

+ (NSXPCInterface *)exportedInterface;

- (void)executeWithCloudOrderQuery:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: _TtC10FinanceKit18XPCCloudOrderQuery *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)forceCloudExportWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)forceCloudImportWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reindexSpotlight;

@end
