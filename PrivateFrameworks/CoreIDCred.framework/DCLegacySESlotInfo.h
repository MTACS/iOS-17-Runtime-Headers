
@interface DCLegacySESlotInfo : NSObject <NSSecureCoding> {
    NSString * _credentialIdentifier;
    bool  _isMissing;
    NSString * _partition;
    NSString * _presentmentKeyIdentifier;
    long long  _seSlot;
}

@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic) bool isMissing;
@property (nonatomic, retain) NSString *partition;
@property (nonatomic, retain) NSString *presentmentKeyIdentifier;
@property (nonatomic) long long seSlot;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)credentialIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSESlot:(long long)arg1 isMissing:(bool)arg2;
- (id)initWithSESlot:(long long)arg1 isMissing:(bool)arg2 partition:(id)arg3 credentialIdentifier:(id)arg4 presentmentKeyIdentifier:(id)arg5;
- (bool)isMissing;
- (id)partition;
- (id)presentmentKeyIdentifier;
- (long long)seSlot;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setIsMissing:(bool)arg1;
- (void)setPartition:(id)arg1;
- (void)setPresentmentKeyIdentifier:(id)arg1;
- (void)setSeSlot:(long long)arg1;

@end
