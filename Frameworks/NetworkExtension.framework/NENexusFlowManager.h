
@interface NENexusFlowManager : NSObject {
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * _defaultInputProtocol;
    NSObject<OS_nw_channel> * _kernelChannel;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * _protocol;
    NSMutableDictionary * _userChannels;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
