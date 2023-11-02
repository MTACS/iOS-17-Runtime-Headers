
@interface DYGTMTLCaptureScopeInfo : NSObject <NSSecureCoding> {
    unsigned long long  _commandQueueStreamRef;
    unsigned long long  _deviceAddress;
    unsigned long long  _deviceStreamRef;
    NSString * _label;
    unsigned long long  _scopeAddress;
    unsigned long long  _scopeStreamRef;
}

@property (nonatomic) unsigned long long commandQueueStreamRef;
@property (nonatomic) unsigned long long deviceAddress;
@property (nonatomic) unsigned long long deviceStreamRef;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long scopeAddress;
@property (nonatomic) unsigned long long scopeStreamRef;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)commandQueueStreamRef;
- (unsigned long long)deviceAddress;
- (unsigned long long)deviceStreamRef;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (unsigned long long)scopeAddress;
- (unsigned long long)scopeStreamRef;
- (void)setCommandQueueStreamRef:(unsigned long long)arg1;
- (void)setDeviceAddress:(unsigned long long)arg1;
- (void)setDeviceStreamRef:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setScopeAddress:(unsigned long long)arg1;
- (void)setScopeStreamRef:(unsigned long long)arg1;

@end
