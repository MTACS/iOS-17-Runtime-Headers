
@interface CBRFCOMMChannel : NSObject {
    unsigned int  _baudRate;
    unsigned char  _channelID;
    unsigned char  _dataBits;
    NSInputStream * _inputStream;
    bool  _isIncoming;
    unsigned short  _mtu;
    NSOutputStream * _outputStream;
    unsigned char  _parity;
    CBClassicPeer * _peer;
    CBUUID * _serviceUUID;
    int  _socketFD;
    unsigned char  _stopBits;
}

@property (nonatomic) unsigned int baudRate;
@property (nonatomic, readonly) unsigned char channelID;
@property (nonatomic) unsigned char dataBits;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) bool isIncoming;
@property (nonatomic, readonly) unsigned short mtu;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic) unsigned char parity;
@property (nonatomic, readonly) CBClassicPeer *peer;
@property (nonatomic, readonly) CBUUID *serviceUUID;
@property (nonatomic, readonly) int socketFD;
@property (nonatomic) unsigned char stopBits;

- (void).cxx_destruct;
- (unsigned int)baudRate;
- (unsigned char)channelID;
- (void)configureChannelPortParams:(unsigned int)arg1 dataBits:(unsigned char)arg2 parity:(unsigned char)arg3 stopBits:(unsigned char)arg4;
- (unsigned char)dataBits;
- (void)dealloc;
- (id)description;
- (id)initWithPeer:(id)arg1 info:(id)arg2;
- (id)inputStream;
- (bool)isIncoming;
- (unsigned short)mtu;
- (id)outputStream;
- (unsigned char)parity;
- (id)peer;
- (id)serviceUUID;
- (void)setBaudRate:(unsigned int)arg1;
- (void)setDataBits:(unsigned char)arg1;
- (void)setParity:(unsigned char)arg1;
- (void)setStopBits:(unsigned char)arg1;
- (int)socketFD;
- (unsigned char)stopBits;

@end
