
@interface VCTextStream : VCMediaStream <VCTextReceiverDelegate, VCTextSender> {
    <VCTextReceiverDelegate> * _receiveDelegate;
    VCTextReceiver * _textReceiver;
    VCTextTransmitter * _textTransmitter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double lastReceivedRTCPPacketTime;
@property (nonatomic, readonly) double lastReceivedRTPPacketTime;
@property (nonatomic) <VCTextReceiverDelegate> *receiveDelegate;
@property (readonly) Class superclass;

+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting { }*)arg3;

- (void)dealloc;
- (void)didReceiveCharacter:(unsigned short)arg1;
- (void)didReceiveText:(id)arg1;
- (id)init;
- (double)lastReceivedRTCPPacketTime;
- (double)lastReceivedRTPPacketTime;
- (void)onCallIDChanged;
- (bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id*)arg2;
- (void)onPauseWithCompletionHandler:(id /* block */)arg1;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onResumeWithCompletionHandler:(id /* block */)arg1;
- (void)onSendRTCPPacket;
- (void)onStartWithCompletionHandler:(id /* block */)arg1;
- (void)onStopWithCompletionHandler:(id /* block */)arg1;
- (id)receiveDelegate;
- (double)rtcpHeartbeatLeeway;
- (void)sendCharacter:(unsigned short)arg1;
- (void)sendText:(id)arg1;
- (void)setReceiveDelegate:(id)arg1;
- (bool)setupTextReceiverWithError:(id*)arg1;
- (void)setupTextTransmitter;
- (id)supportedPayloads;

@end
