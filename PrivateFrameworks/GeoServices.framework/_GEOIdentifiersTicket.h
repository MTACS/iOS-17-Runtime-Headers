
@interface _GEOIdentifiersTicket : GEOAbstractMapServiceTicket {
    NSString * _contentProvider;
    NSArray * _identifiers;
    unsigned long long  _options;
    id  _requestToken;
    int  _resultProviderID;
}

- (void).cxx_destruct;
- (void)cancel;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKind;
- (id)description;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 options:(unsigned long long)arg5;
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 options:(unsigned long long)arg5;
- (id)initWithTraits:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;

@end
