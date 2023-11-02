
@interface THThreadNetworkCredentials : NSObject <NSSecureCoding> {
    NSData * _PANID;
    NSData * _PSKc;
    unsigned char  _channel;
    THThreadNetworkCredentialsDataSet * _credentialsDataSet;
    bool  _isActiveDevice;
    NSData * _masterKey;
    NSString * _passPhrase;
    NSString * _userInfo;
}

@property (nonatomic, copy) NSData *PANID;
@property (nonatomic, copy) NSData *PSKc;
@property (nonatomic) unsigned char channel;
@property (nonatomic, retain) THThreadNetworkCredentialsDataSet *credentialsDataSet;
@property (nonatomic) bool isActiveDevice;
@property (nonatomic, copy) NSData *masterKey;
@property (nonatomic, copy) NSString *passPhrase;
@property (nonatomic, copy) NSString *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)PANID;
- (id)PSKc;
- (unsigned char)channel;
- (id)credentialsDataSet;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMasterKey:(id)arg1 passPhrase:(id)arg2 PSKc:(id)arg3 channel:(unsigned char)arg4 PANID:(id)arg5 userInfo:(id)arg6;
- (id)initWithMasterKey:(id)arg1 passPhrase:(id)arg2 PSKc:(id)arg3 channel:(unsigned char)arg4 PANID:(id)arg5 userInfo:(id)arg6 credentialDataSet:(id)arg7 isActiveDevice:(bool)arg8;
- (bool)isActiveDevice;
- (id)masterKey;
- (id)passPhrase;
- (void)setChannel:(unsigned char)arg1;
- (void)setCredentialsDataSet:(id)arg1;
- (void)setIsActiveDevice:(bool)arg1;
- (void)setMasterKey:(id)arg1;
- (void)setPANID:(id)arg1;
- (void)setPSKc:(id)arg1;
- (void)setPassPhrase:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
