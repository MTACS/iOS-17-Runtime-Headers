
@interface _GEOFailedTicket : GEOAbstractMapServiceTicket {
    NSError * _error;
}

- (void).cxx_destruct;
- (id)initWithError:(id)arg1 traits:(id)arg2;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;
- (void)submitWithRefinedHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;

@end
