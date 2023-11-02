
@interface MEComposeContext : NSObject <NSSecureCoding> {
    long long  _action;
    NSUUID * _contextID;
    bool  _isEncrypted;
    bool  _isSigned;
    MEMessage * _originalMessage;
    bool  _shouldEncrypt;
    bool  _shouldSign;
}

@property (nonatomic) long long action;
@property (nonatomic, retain) NSUUID *contextID;
@property (nonatomic) bool isEncrypted;
@property (nonatomic) bool isSigned;
@property (nonatomic, retain) MEMessage *originalMessage;
@property (nonatomic) bool shouldEncrypt;
@property (nonatomic) bool shouldSign;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)contextID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAction:(long long)arg1 originalMessage:(id)arg2 shouldSign:(bool)arg3 isSigned:(bool)arg4 shouldEncrypt:(bool)arg5 isEncrypted:(bool)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEncrypted;
- (bool)isSigned;
- (id)originalMessage;
- (void)setAction:(long long)arg1;
- (void)setContextID:(id)arg1;
- (void)setIsEncrypted:(bool)arg1;
- (void)setIsSigned:(bool)arg1;
- (void)setOriginalMessage:(id)arg1;
- (void)setShouldEncrypt:(bool)arg1;
- (void)setShouldSign:(bool)arg1;
- (bool)shouldEncrypt;
- (bool)shouldSign;

@end
