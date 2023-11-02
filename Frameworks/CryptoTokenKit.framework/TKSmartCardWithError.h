
@interface TKSmartCardWithError : TKSmartCard {
    NSError * _error;
    TKSmartCard * _parentCard;
}

- (void).cxx_destruct;
- (void)beginSessionWithReply:(id /* block */)arg1;
- (id)initWithCard:(id)arg1 error:(id)arg2;
- (void)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 reply:(id /* block */)arg6;
- (void)transmitRequest:(id)arg1 reply:(id /* block */)arg2;

@end
