
@protocol ILMessageFilterExtensionHostProtocol <NSObject>

@required

- (oneway void)deferQueryRequestToNetworkWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ILNetworkResponse *, NSError *, void*
- (oneway void)deferReportRequestToNetworkWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ILNetworkResponse *, NSError *, void*

@end
