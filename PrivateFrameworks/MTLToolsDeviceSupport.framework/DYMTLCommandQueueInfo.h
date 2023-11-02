
@interface DYMTLCommandQueueInfo : NSObject <DYCapturableObject, NSCopying, NSSecureCoding> {
    bool  _canBeCaptured;
    unsigned long long  _deviceAddress;
    unsigned long long  _deviceStreamRef;
    NSString * _displayName;
    bool  _isInternalQueue;
    bool  _isOpenGLQueue;
    NSString * _label;
    unsigned long long  _queueAddress;
    unsigned long long  _streamRef;
    unsigned long long  _toolsQueueAddress;
}

@property (nonatomic) bool canBeCaptured;
@property (nonatomic, readonly) NSString *capturableObjectType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceAddress;
@property (nonatomic, readonly) unsigned long long deviceStreamRef;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInternalQueue;
@property (nonatomic) bool isOpenGLQueue;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long queueAddress;
@property (nonatomic) unsigned long long streamRef;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long toolsQueueAddress;

+ (id)capturableObjectType;
+ (bool)isLabelAppleInternal:(const char *)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canBeCaptured;
- (id)capturableObjectType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)deviceAddress;
- (unsigned long long)deviceStreamRef;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommandQueue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInternalQueue;
- (bool)isOpenGLQueue;
- (id)label;
- (unsigned long long)queueAddress;
- (void)setCanBeCaptured:(bool)arg1;
- (void)setIsInternalQueue:(bool)arg1;
- (void)setIsOpenGLQueue:(bool)arg1;
- (void)setStreamRef:(unsigned long long)arg1;
- (unsigned long long)streamRef;
- (unsigned long long)toolsQueueAddress;

@end
