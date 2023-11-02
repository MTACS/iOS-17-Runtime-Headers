
@interface _GEOComponentsTicket : GEOAbstractMapServiceTicket {
    NSDictionary * _components;
    NSString * _contentProvider;
    GEOMapItemIdentifier * _identifier;
    int  _resultProviderID;
}

- (void).cxx_destruct;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKind;
- (id)description;
- (id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5;
- (id)initWithTraits:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;

@end
