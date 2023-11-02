
@interface _GEOLegacyBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket {
    GEOBatchRevGeocodeRequest * _batchReverseGeocodeRequest;
    id /* block */  _locationShifter;
}

- (void).cxx_destruct;
- (void)_batchReverseGeocodeWithRequest:(id)arg1 auditToken:(id)arg2 handler:(id /* block */)arg3 networkActivity:(id /* block */)arg4;
- (void)cancel;
- (id)description;
- (id)initWithBatchReverseGeocodeRequest:(id)arg1 locationShifter:(id /* block */)arg2 traits:(id)arg3;
- (bool)isEqualForHistoryToTicket:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;

@end
