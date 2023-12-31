
@interface HMDSessionControl : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    unsigned long long  _controlCommand;
    NSUUID * _sessionID;
}

@property (nonatomic, readonly) unsigned long long controlCommand;
@property (nonatomic, readonly, copy) NSUUID *sessionID;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (unsigned long long)controlCommand;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommand:(unsigned long long)arg1 sessionIdentifier:(id)arg2;
- (id)sessionID;
- (id)tlvData;

@end
