
@interface NEIKEv2TransportClient : NSObject {
    NEIKEv2IKESPI * _clientSPI;
    <NEIKEv2TransportDelegate> * _delegate;
    NEIKEv2IKESPI * _remoteSPI;
    bool  _wildcard;
}

- (void).cxx_destruct;
- (id)description;

@end
