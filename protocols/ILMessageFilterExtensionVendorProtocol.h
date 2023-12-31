
@protocol ILMessageFilterExtensionVendorProtocol <NSObject>

@required

- (oneway void)finish;
- (oneway void)handleCapabilitiesQueryRequest:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: ILMessageFilterCapabilitiesQueryRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ILMessageFilterCapabilitiesQueryResponse *, void*
- (oneway void)handleQueryRequest:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: ILMessageFilterQueryRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ILMessageFilterQueryResponse *, void*
- (oneway void)handleReportRequest:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: ILMessageFilterReportRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
