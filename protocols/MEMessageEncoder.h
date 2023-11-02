
@protocol MEMessageEncoder <NSObject>

@required

- (void)encodeMessage:(void *)arg1 composeContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MEMessage *, MEComposeContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MEMessageEncodingResult *, void*
- (void)getEncodingStatusForMessage:(void *)arg1 composeContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MEMessage *, MEComposeContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MEOutgoingMessageEncodingStatus *, void*

@end
