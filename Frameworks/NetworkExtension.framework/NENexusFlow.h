
@interface NENexusFlow : NSObject {
    NENexusFlowManager * _manager;
    NSUUID * _nexusInstance;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * _protocol;
    unsigned long long  _state;
}

@property (nonatomic, readonly) NSUUID *clientIdentifier;
@property (nonatomic, readonly) NWEndpoint *endpoint;
@property (nonatomic, readonly) NWParameters *parameters;
@property (nonatomic) struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*protocol;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (void)dealloc;
- (id)endpoint;
- (id)parameters;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)protocol;
- (void)setProtocol:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
