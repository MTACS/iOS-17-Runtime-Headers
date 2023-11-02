
@protocol RTIInputSystemPayloadDelegate <NSObject>

@required

- (void)handleTextActionPayload:(RTIDataPayload *)arg1;

@optional

- (void)performDocumentRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: RTIDocumentRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RTIDocumentState *, void*

@end
