
@interface AWRemoteAttentionEvent : AWAttentionEvent <NSSecureCoding> {
    bool  _buttonPressed;
    unsigned long long  _senderID;
    long long  _usage;
    long long  _usagePage;
}

@property (nonatomic, readonly) bool buttonPressed;
@property (nonatomic, readonly) unsigned long long senderID;
@property (nonatomic, readonly) long long usage;
@property (nonatomic, readonly) long long usagePage;

+ (bool)supportsSecureCoding;

- (bool)buttonPressed;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 remoteMetadata:(struct AWRemoteMetadata { long long x1; long long x2; unsigned long long x3; bool x4; }*)arg3;
- (unsigned long long)senderID;
- (long long)usage;
- (long long)usagePage;
- (void)validateMask;

@end
