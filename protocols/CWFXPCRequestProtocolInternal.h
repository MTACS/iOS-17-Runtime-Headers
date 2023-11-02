
@protocol CWFXPCRequestProtocolInternal <CWFXPCRequestProtocolPrivate>

@required

- (void)queryDeviceUUIDWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSUUID *, void*
- (void)querySystemActivitiesWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)querySystemEventIDsWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSSet *, void*

@end
