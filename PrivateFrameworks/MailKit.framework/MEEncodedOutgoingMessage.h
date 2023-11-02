
@interface MEEncodedOutgoingMessage : NSObject <NSSecureCoding> {
    bool  _isEncrypted;
    bool  _isSigned;
    NSData * _rawData;
}

@property (nonatomic, readonly) bool isEncrypted;
@property (nonatomic, readonly) bool isSigned;
@property (nonatomic, readonly, copy) NSData *rawData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawData:(id)arg1 isSigned:(bool)arg2 isEncrypted:(bool)arg3;
- (bool)isEncrypted;
- (bool)isEqual:(id)arg1;
- (bool)isSigned;
- (id)rawData;

@end
