
@interface GEOOfflinePlacesServiceRequesterOperation : GEOOfflineServiceRequesterOperation {
    NSString * _offlineCohortId;
}

- (void).cxx_destruct;
- (void)_recordAnalyticsDataForResponse:(id)arg1;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 config:(id)arg4 throttleToken:(id)arg5 options:(unsigned long long)arg6 willSendRequestHandler:(id /* block */)arg7 validationHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;

@end
