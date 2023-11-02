
@interface MEMessageSecurityInformation : NSObject <NSSecureCoding> {
    NSString * _decoderID;
    NSError * _encryptionError;
    bool  _isEncrypted;
    NSString * _localizedRemoteContentBlockingReason;
    bool  _shouldBlockRemoteContent;
    NSArray * _signers;
    NSError * _signingError;
}

@property (nonatomic, retain) NSString *decoderID;
@property (nonatomic, readonly) NSError *encryptionError;
@property (nonatomic, readonly) bool isEncrypted;
@property (nonatomic, readonly) NSString *localizedRemoteContentBlockingReason;
@property (nonatomic, readonly) bool shouldBlockRemoteContent;
@property (nonatomic, readonly) NSArray *signers;
@property (nonatomic, readonly) NSError *signingError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decoderID;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionError;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigners:(id)arg1 isEncrypted:(bool)arg2 signingError:(id)arg3 encryptionError:(id)arg4;
- (id)initWithSigners:(id)arg1 isEncrypted:(bool)arg2 signingError:(id)arg3 encryptionError:(id)arg4 shouldBlockRemoteContent:(bool)arg5 localizedRemoteContentBlockingReason:(id)arg6;
- (bool)isEncrypted;
- (bool)isEqual:(id)arg1;
- (id)localizedRemoteContentBlockingReason;
- (void)setDecoderID:(id)arg1;
- (bool)shouldBlockRemoteContent;
- (id)signers;
- (id)signingError;

@end
