
@interface DIXPCDispatcher : NSObject <DIXPCClientInterface> {
    void audioPowerDelegate;
    void audioStatusDelegate;
    void clientContext;
    void deviceListDelegate;
    void deviceStatusDelegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void sessionStatusDelegate;
}

@property (nonatomic) <DIAudioPowerDelegate> *audioPowerDelegate;
@property (nonatomic) <DIAudioStatusDelegate> *audioStatusDelegate;
@property (nonatomic) <DIDeviceListDelegate> *deviceListDelegate;
@property (nonatomic) <DIDeviceStatusDelegate> *deviceStatusDelegate;
@property (nonatomic) <DISessionStatusDelegate> *sessionStatusDelegate;

- (void).cxx_destruct;
- (id)audioPowerDelegate;
- (id)audioStatusDelegate;
- (id)deviceListDelegate;
- (id)deviceStatusDelegate;
- (void)didAddDevice:(id)arg1;
- (void)didAddSession:(id)arg1;
- (void)didLoadDevices:(id)arg1;
- (void)didRemoveDevice:(id)arg1;
- (void)didRemoveSession:(id)arg1;
- (void)didUpdateAudioPower:(float)arg1;
- (void)didUpdateDevice:(id)arg1;
- (void)didUpdateDownlinkMuteStatus:(bool)arg1;
- (void)didUpdateSession:(id)arg1;
- (void)didUpdateUplinkMuteStatus:(bool)arg1;
- (void)fetchClientContextWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 25: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, long double, unsigned int, unsigned char, long, int, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (id)initWithClientContext:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didUpdateUplinkMuteStatus:(bool)arg2;
- (id)sessionStatusDelegate;
- (void)setAudioPowerDelegate:(id)arg1;
- (void)setAudioStatusDelegate:(id)arg1;
- (void)setDeviceListDelegate:(id)arg1;
- (void)setDeviceStatusDelegate:(id)arg1;
- (void)setSessionStatusDelegate:(id)arg1;

@end
