
@interface BloodhoundPacketDumper : NSObject {
    struct pcap_dumper { } * _dumper;
    bool  _externalDumper;
    NSString * _fileName;
    struct pcap { } * _pcap;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)dumpPacket:(id)arg1 type:(unsigned int)arg2 metadata:(void*)arg3 metadataLength:(unsigned long long)arg4;
- (id)initWithDumper:(struct pcap_dumper { }*)arg1;
- (id)initWithFileName:(id)arg1;

@end
