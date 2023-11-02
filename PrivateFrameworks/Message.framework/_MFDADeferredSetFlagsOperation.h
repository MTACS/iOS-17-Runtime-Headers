
@interface _MFDADeferredSetFlagsOperation : _MFOfflineCacheOperation {
    NSString * _messageID;
    unsigned long long  _offFlags;
    unsigned long long  _onFlags;
}

+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)translateToLocalActionWithConnection:(id)arg1;

@end
