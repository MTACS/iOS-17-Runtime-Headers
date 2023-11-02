
@interface THPreferredThreadNetwork : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    THThreadNetworkCredentialsActiveDataSetRecord * _credentialsDataSetRecord;
    NSDate * _lastModificationDate;
    THThreadNetwork * _network;
    THNetworkSignature * _networkSignature;
    NSString * _userInfo;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) THThreadNetworkCredentialsActiveDataSetRecord *credentialsDataSetRecord;
@property (nonatomic, readonly) NSDate *lastModificationDate;
@property (nonatomic, readonly) THThreadNetwork *network;
@property (nonatomic, readonly) THNetworkSignature *networkSignature;
@property (nonatomic, copy) NSString *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)creationDate;
- (id)credentialsDataSetRecord;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreadNetwork:(id)arg1 networkSignature:(id)arg2 credentialsDataSetRecord:(id)arg3 creationDate:(id)arg4 lastModificationDate:(id)arg5 userInfo:(id)arg6;
- (id)lastModificationDate;
- (id)network;
- (id)networkSignature;
- (void)setUserInfo:(id)arg1;
- (void)updateUserInfo:(id)arg1;
- (id)userInfo;

@end
