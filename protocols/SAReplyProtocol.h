
@protocol SAReplyProtocol

@required

- (void)callAppSizerHandlerWithResults:(void *)arg1 error:(void *)arg2 withHandlerResultBlock:(void *)arg3; // needs 3 arg types, found 8: SAAppSizerResults *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)callURLSizerHandlerWithResults:(void *)arg1 error:(void *)arg2 withHandlerResultsBlock:(void *)arg3; // needs 3 arg types, found 8: SAURLSizerResults *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
