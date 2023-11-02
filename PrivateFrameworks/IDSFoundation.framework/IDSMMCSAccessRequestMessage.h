
@interface IDSMMCSAccessRequestMessage : IDSMessage {
    NSArray * _downloadAuths;
    NSString * _downloadingDeviceID;
    NSData * _downloadingDeviceToken;
    NSString * _senderID;
    NSData * _sessionToken;
}

@property (nonatomic, retain) NSArray *downloadAuths;
@property (nonatomic, retain) NSString *downloadingDeviceID;
@property (nonatomic, retain) NSData *downloadingDeviceToken;
@property (nonatomic, retain) NSString *senderID;
@property (nonatomic, retain) NSData *sessionToken;

- (void).cxx_destruct;
- (long long)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)downloadAuths;
- (id)downloadingDeviceID;
- (id)downloadingDeviceToken;
- (id)init;
- (id)messageBody;
- (id)requiredKeys;
- (long long)responseCommand;
- (id)senderID;
- (id)sessionToken;
- (void)setDownloadAuths:(id)arg1;
- (void)setDownloadingDeviceID:(id)arg1;
- (void)setDownloadingDeviceToken:(id)arg1;
- (void)setSenderID:(id)arg1;
- (void)setSessionToken:(id)arg1;

@end
