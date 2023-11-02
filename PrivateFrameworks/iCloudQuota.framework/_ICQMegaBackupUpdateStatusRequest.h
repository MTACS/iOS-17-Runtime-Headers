
@interface _ICQMegaBackupUpdateStatusRequest : _ICQMegaBackupNetworkRequest {
    ACAccount * _account;
    NSString * _deviceBackupUUID;
    NSDate * _expirationDate;
    long long  _status;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly, copy) NSString *deviceBackupUUID;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) long long status;

+ (id)updateStatusRequestWithAccount:(id)arg1 deviceBackupUUID:(id)arg2 status:(long long)arg3 requestURL:(id)arg4 URLSession:(id)arg5 queue:(id)arg6 error:(id*)arg7;

- (void).cxx_destruct;
- (id)account;
- (void)addAdditionalRequestHeaders:(id)arg1;
- (id)additionalRequestHeaders;
- (id)bodyJSON;
- (id)deviceBackupUUID;
- (id)expirationDate;
- (id)handleResponse:(id)arg1 body:(id)arg2;
- (long long)status;

@end
