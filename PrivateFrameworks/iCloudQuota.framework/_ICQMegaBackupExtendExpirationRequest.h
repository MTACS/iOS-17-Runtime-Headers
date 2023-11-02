
@interface _ICQMegaBackupExtendExpirationRequest : _ICQMegaBackupNetworkRequest {
    ACAccount * _account;
    NSString * _deviceBackupUUID;
    bool  _extensionAllowed;
    NSDate * _requestedExpirationDate;
    NSDate * _updatedExpirationDate;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly, copy) NSString *deviceBackupUUID;
@property (getter=isExtensionAllowed, nonatomic, readonly) bool extensionAllowed;
@property (nonatomic, readonly, copy) NSDate *requestedExpirationDate;
@property (nonatomic, readonly) NSDate *updatedExpirationDate;

+ (id)extendExpirationRequestWithAccount:(id)arg1 deviceBackupUUID:(id)arg2 requestedExpirationDate:(id)arg3 requestURL:(id)arg4 URLSession:(id)arg5 queue:(id)arg6 error:(id*)arg7;

- (void).cxx_destruct;
- (id)account;
- (void)addAdditionalRequestHeaders:(id)arg1;
- (id)additionalRequestHeaders;
- (id)bodyJSON;
- (id)deviceBackupUUID;
- (id)handleResponse:(id)arg1 body:(id)arg2;
- (bool)isExtensionAllowed;
- (id)requestedExpirationDate;
- (id)updatedExpirationDate;

@end
