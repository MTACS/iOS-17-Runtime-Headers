
@interface DYMTLCaptureScopeInfo : NSObject <DYCapturableObject, NSCopying, NSSecureCoding> {
    unsigned long long  _deviceAddress;
    NSString * _displayName;
    NSString * _label;
    unsigned long long  _scopeAddress;
    unsigned long long  _scopeStreamRef;
}

@property (nonatomic, readonly) NSString *capturableObjectType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceAddress;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) unsigned long long scopeAddress;
@property (nonatomic, readonly) unsigned long long scopeStreamRef;
@property (nonatomic, readonly) unsigned long long streamRef;
@property (readonly) Class superclass;

+ (id)capturableObjectType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capturableObjectType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)deviceAddress;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCaptureScope:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)scopeAddress;
- (unsigned long long)scopeStreamRef;
- (unsigned long long)streamRef;

@end
