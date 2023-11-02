
@interface NEIPsecNexus : NEInternetNexus {
    NSArray * _nexusInstances;
}

@property (nonatomic, retain) NSArray *nexusInstances;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 delegate:(id)arg2 enableWithChannelCount:(unsigned int)arg3;
- (id)initWithName:(id)arg1 delegate:(id)arg2 enableWithChannelCount:(unsigned int)arg3 netifRingSize:(unsigned int)arg4 kernelPipeTxRingSize:(unsigned int)arg5 kernelPipeRxRingSize:(unsigned int)arg6;
- (id)initWithName:(id)arg1 delegate:(id)arg2 enableWithChannelCount:(unsigned int)arg3 netifRingSize:(unsigned int)arg4 kernelPipeTxRingSize:(unsigned int)arg5 kernelPipeRxRingSize:(unsigned int)arg6 execUUID:(id)arg7;
- (id)initWithName:(id)arg1 delegate:(id)arg2 shouldCreateKernelChannel:(bool)arg3;
- (id)nexusInstances;
- (bool)setDefaultInputHandler:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1;
- (void)setNexusInstances:(id)arg1;
- (void)setRemotePacketProxy:(id)arg1;

@end
