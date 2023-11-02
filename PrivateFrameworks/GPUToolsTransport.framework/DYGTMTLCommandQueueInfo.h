
@interface DYGTMTLCommandQueueInfo : NSObject <NSSecureCoding> {
    bool  _canBeCaptured;
    unsigned long long  _deviceAddress;
    unsigned long long  _deviceStreamRef;
    bool  _isInternalQueue;
    bool  _isOpenGLQueue;
    NSString * _label;
    unsigned long long  _queueAddress;
    unsigned long long  _streamRef;
    unsigned long long  _toolsDeviceAddress;
    unsigned long long  _toolsQueueAddress;
}

@property (nonatomic) bool canBeCaptured;
@property (nonatomic) unsigned long long deviceAddress;
@property (nonatomic) unsigned long long deviceStreamRef;
@property (nonatomic) bool isInternalQueue;
@property (nonatomic) bool isOpenGLQueue;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long queueAddress;
@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) unsigned long long toolsDeviceAddress;
@property (nonatomic) unsigned long long toolsQueueAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canBeCaptured;
- (id)description;
- (unsigned long long)deviceAddress;
- (unsigned long long)deviceStreamRef;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isInternalQueue;
- (bool)isOpenGLQueue;
- (id)label;
- (unsigned long long)queueAddress;
- (void)setCanBeCaptured:(bool)arg1;
- (void)setDeviceAddress:(unsigned long long)arg1;
- (void)setDeviceStreamRef:(unsigned long long)arg1;
- (void)setIsInternalQueue:(bool)arg1;
- (void)setIsOpenGLQueue:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setQueueAddress:(unsigned long long)arg1;
- (void)setStreamRef:(unsigned long long)arg1;
- (void)setToolsDeviceAddress:(unsigned long long)arg1;
- (void)setToolsQueueAddress:(unsigned long long)arg1;
- (unsigned long long)streamRef;
- (unsigned long long)toolsDeviceAddress;
- (unsigned long long)toolsQueueAddress;

@end
