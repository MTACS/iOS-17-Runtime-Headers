
@interface CBL2CAPChannel : NSObject {
    unsigned short  _PSM;
    NSInputStream * _inputStream;
    bool  _isIncoming;
    NSOutputStream * _outputStream;
    CBPeer * _peer;
    CBUUID * _serviceUUID;
    int  _socketFD;
}

@property (nonatomic, readonly) unsigned short PSM;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic) bool isIncoming;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic, readonly) CBPeer *peer;
@property (nonatomic, retain) CBUUID *serviceUUID;
@property (nonatomic, readonly) int socketFD;

- (void).cxx_destruct;
- (unsigned short)PSM;
- (void)dealloc;
- (id)description;
- (id)initWithPeer:(id)arg1 info:(id)arg2;
- (id)inputStream;
- (bool)isIncoming;
- (id)outputStream;
- (id)peer;
- (id)serviceUUID;
- (void)setIsIncoming:(bool)arg1;
- (void)setServiceUUID:(id)arg1;
- (int)socketFD;

@end
