
@protocol ATLegacyMessageLink <NSObject>

@required

- (void)removeHandlerForMessage:(NSString *)arg1;
- (void)sendMessage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ATLegacyMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setHandlerForMessage:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ATLegacyMessageLink> *, ATLegacyMessage *, void*

@end
