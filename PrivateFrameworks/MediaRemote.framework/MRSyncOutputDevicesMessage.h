
@interface MRSyncOutputDevicesMessage : MRProtocolMessage {
    NSArray * _outputDevices;
}

@property (nonatomic, readonly) NSArray *outputDevices;

- (void).cxx_destruct;
- (id)initWithOutputDevices:(id)arg1;
- (id)outputDevices;
- (unsigned long long)type;

@end
