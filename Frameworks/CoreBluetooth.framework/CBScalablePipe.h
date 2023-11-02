
@interface CBScalablePipe : NSObject {
    CBCentral * _central;
    void * _channel;
    NSInputStream * _input;
    unsigned int  _localCLFeatures;
    unsigned char  _localCLVersion;
    NSString * _name;
    NSOutputStream * _output;
    CBPeer * _peer;
    unsigned int  _peerCLFeatures;
    unsigned char  _peerCLVersion;
    long long  _peerType;
    CBScalablePipeManager * _pipeManager;
    long long  _priority;
    bool  _reliablePipe;
    int  _socket;
    long long  _type;
}

@property (nonatomic, readonly) CBCentral *central;
@property (nonatomic, readonly) void*channel;
@property (nonatomic, readonly) NSInputStream *input;
@property (nonatomic, readonly) unsigned int localCLFeatures;
@property (nonatomic, readonly) unsigned char localCLVersion;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSOutputStream *output;
@property (nonatomic, readonly) CBPeer *peer;
@property (nonatomic, readonly) unsigned int peerCLFeatures;
@property (nonatomic, readonly) unsigned char peerCLVersion;
@property (nonatomic, readonly) long long peerType;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) bool reliablePipe;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)central;
- (void*)channel;
- (void)dealloc;
- (id)description;
- (id)initWithPipeManager:(id)arg1 info:(id)arg2;
- (id)input;
- (unsigned int)localCLFeatures;
- (unsigned char)localCLVersion;
- (id)name;
- (id)output;
- (id)peer;
- (unsigned int)peerCLFeatures;
- (unsigned char)peerCLVersion;
- (long long)peerType;
- (long long)priority;
- (bool)reliablePipe;
- (void)setOrphan;
- (long long)type;

@end
