
@protocol CWFXPCRequestProtocolPublicWiFi

@required

- (void)queryBSSIDForVendorWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)queryBSSIDWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)querySSIDForVendorWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)querySSIDWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSData *, void*
- (void)startMonitoringEvent:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFEventID *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopMonitoringAllEventsWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopMonitoringEvent:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFEventID *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
