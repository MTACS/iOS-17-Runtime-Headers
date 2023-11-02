
@interface SimplePing : NSObject <NSCopying> {
    long long  _addressStyle;
    <SimplePingDelegate> * _delegate;
    struct __CFHost { } * _host;
    NSData * _hostAddress;
    NSString * _hostName;
    unsigned short  _identifier;
    unsigned short  _nextSequenceNumber;
    bool  _nextSequenceNumberHasWrapped;
    struct __CFSocket { } * _socket;
    NSObject<OS_dispatch_source> * timeoutTimer;
}

@property (nonatomic) long long addressStyle;
@property (nonatomic) <SimplePingDelegate> *delegate;
@property (nonatomic, retain) struct __CFHost { }*host;
@property (nonatomic, copy) NSData *hostAddress;
@property (nonatomic, readonly) unsigned char hostAddressFamily;
@property (nonatomic, readonly, copy) NSString *hostName;
@property (nonatomic, readonly) unsigned short identifier;
@property (nonatomic) unsigned short nextSequenceNumber;
@property (nonatomic) bool nextSequenceNumberHasWrapped;
@property (nonatomic, retain) struct __CFSocket { }*socket;

+ (unsigned long long)icmpHeaderOffsetInIPv4Packet:(id)arg1;

- (void).cxx_destruct;
- (long long)addressStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didFailWithError:(id)arg1;
- (void)didFailWithHostStreamError:(struct { long long x1; int x2; })arg1;
- (struct __CFHost { }*)host;
- (id)hostAddress;
- (unsigned char)hostAddressFamily;
- (id)hostName;
- (void)hostResolutionDone;
- (unsigned short)identifier;
- (id)initWithHostName:(id)arg1;
- (unsigned short)nextSequenceNumber;
- (bool)nextSequenceNumberHasWrapped;
- (id)pingPacketWithType:(unsigned char)arg1 payload:(id)arg2 requiresChecksum:(bool)arg3;
- (void)readData;
- (void)sendPingWithData:(id)arg1;
- (void)setAddressStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHost:(struct __CFHost { }*)arg1;
- (void)setHostAddress:(id)arg1;
- (void)setNextSequenceNumber:(unsigned short)arg1;
- (void)setNextSequenceNumberHasWrapped:(bool)arg1;
- (void)setSocket:(struct __CFSocket { }*)arg1;
- (void)setupTimer:(id)arg1 currentSequenceNumber:(unsigned short)arg2;
- (struct __CFSocket { }*)socket;
- (void)start;
- (void)startWithHostAddress;
- (void)stop;
- (void)stopHostResolution;
- (void)stopSocket;
- (void)timeOutHandler:(id)arg1 sequenceNumber:(unsigned short)arg2;
- (bool)validatePing4ResponsePacket:(id)arg1 sequenceNumber:(unsigned short*)arg2;
- (bool)validatePing6ResponsePacket:(id)arg1 sequenceNumber:(unsigned short*)arg2;
- (bool)validatePingResponsePacket:(id)arg1 sequenceNumber:(unsigned short*)arg2;
- (bool)validateSequenceNumber:(unsigned short)arg1;

@end
