
@interface AWDigitizerButtonKeyboardAttentionEvent : AWAttentionEvent <NSSecureCoding> {
    NSString * _displayUUID;
    unsigned long long  _senderID;
}

@property (nonatomic, readonly) NSString *displayUUID;
@property (nonatomic, readonly) unsigned long long senderID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 digitizerButtonKeyboardMetadata:(struct AWDigitizerButtonKeyboardMetadata { unsigned long long x1; struct __CFString {} *x2; }*)arg3;
- (unsigned long long)senderID;
- (void)validateMask;

@end
