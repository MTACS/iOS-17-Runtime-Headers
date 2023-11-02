
@interface _ICQMegaBackupEligibilityRequest : _ICQMegaBackupNetworkRequest {
    ACAccount * _account;
    bool  _backupAllowed;
    NSNumber * _daysUntilExpiration;
    NSString * _deepLinkURL;
    NSString * _deviceBackupUUID;
    NSNumber * _deviceTotalUsedSpaceInBytes;
    long long  _entryMethod;
    bool  _needsTemporaryStorage;
}

@property (nonatomic, readonly) ACAccount *account;
@property (getter=isBackupAllowed, nonatomic, readonly) bool backupAllowed;
@property (nonatomic, readonly) NSNumber *daysUntilExpiration;
@property (nonatomic, readonly, copy) NSString *deepLinkURL;
@property (nonatomic, readonly, copy) NSString *deviceBackupUUID;
@property (nonatomic, readonly, copy) NSNumber *deviceTotalUsedSpaceInBytes;
@property (nonatomic, readonly) long long entryMethod;
@property (nonatomic, readonly) bool needsTemporaryStorage;

+ (id)eligibilityRequestWithAccount:(id)arg1 deviceBackupUUID:(id)arg2 deviceTotalUsedSpaceInBytes:(id)arg3 entryMethod:(long long)arg4 deepLinkURL:(id)arg5 requestURL:(id)arg6 URLSession:(id)arg7 queue:(id)arg8 error:(id*)arg9;

- (void).cxx_destruct;
- (id)account;
- (void)addAdditionalRequestHeaders:(id)arg1;
- (id)additionalRequestHeaders;
- (id)bodyJSON;
- (id)daysUntilExpiration;
- (id)deepLinkURL;
- (id)deviceBackupUUID;
- (id)deviceTotalUsedSpaceInBytes;
- (long long)entryMethod;
- (id)handleResponse:(id)arg1 body:(id)arg2;
- (bool)isBackupAllowed;
- (bool)needsTemporaryStorage;

@end
