
@interface HMFNetworkDiagnosticPing : HMFNetworkDiagnostic {
    unsigned short  _identifier;
    NSDate * _pingStartDate;
    HMFPromise * _readPromise;
    double  _runDuration;
    unsigned short  _sequenceNumber;
    int  _sockHandle_ipv4;
    int  _sockHandle_ipv6;
    struct __CFSocket { } * _socket_ipv4;
    struct __CFSocket { } * _socket_ipv6;
}

@property (nonatomic) unsigned short identifier;
@property (nonatomic, retain) NSDate *pingStartDate;
@property (nonatomic, retain) HMFPromise *readPromise;
@property (nonatomic) double runDuration;
@property (nonatomic) unsigned short sequenceNumber;
@property (nonatomic) int sockHandle_ipv4;
@property (nonatomic) int sockHandle_ipv6;
@property (nonatomic) struct __CFSocket { }*socket_ipv4;
@property (nonatomic) struct __CFSocket { }*socket_ipv6;

- (void).cxx_destruct;
- (id)_configure;
- (void)_readDataFromSocket:(struct __CFSocket { }*)arg1;
- (id)_sendData:(id)arg1;
- (id)_sendData:(id)arg1 address:(id)arg2;
- (id)_sendPing:(id)arg1;
- (id)addressIPV4;
- (id)addressIPV6;
- (id)dumpReport;
- (unsigned short)identifier;
- (id)initWithDevice:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (id)pingDelegate;
- (id)pingStartDate;
- (id)readPromise;
- (id)run;
- (double)runDuration;
- (unsigned short)sequenceNumber;
- (void)setIdentifier:(unsigned short)arg1;
- (void)setPingStartDate:(id)arg1;
- (void)setReadPromise:(id)arg1;
- (void)setRunDuration:(double)arg1;
- (void)setSequenceNumber:(unsigned short)arg1;
- (void)setSockHandle_ipv4:(int)arg1;
- (void)setSockHandle_ipv6:(int)arg1;
- (void)setSocket_ipv4:(struct __CFSocket { }*)arg1;
- (void)setSocket_ipv6:(struct __CFSocket { }*)arg1;
- (id)shortDescription;
- (int)sockHandle_ipv4;
- (int)sockHandle_ipv6;
- (struct __CFSocket { }*)socket_ipv4;
- (struct __CFSocket { }*)socket_ipv6;
- (void)stop;
- (void)stopWithError:(id)arg1;
- (id)workContext;

@end
