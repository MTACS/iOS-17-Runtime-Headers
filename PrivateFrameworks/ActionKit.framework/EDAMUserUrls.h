
@interface EDAMUserUrls : FATObject {
    NSString * _communicationEngineUrl;
    NSString * _messageStoreUrl;
    NSString * _noteStoreUrl;
    NSString * _userStoreUrl;
    NSString * _userWebSocketUrl;
    NSString * _utilityUrl;
    NSString * _webApiUrlPrefix;
}

@property (nonatomic, retain) NSString *communicationEngineUrl;
@property (nonatomic, retain) NSString *messageStoreUrl;
@property (nonatomic, retain) NSString *noteStoreUrl;
@property (nonatomic, retain) NSString *userStoreUrl;
@property (nonatomic, retain) NSString *userWebSocketUrl;
@property (nonatomic, retain) NSString *utilityUrl;
@property (nonatomic, retain) NSString *webApiUrlPrefix;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)communicationEngineUrl;
- (id)messageStoreUrl;
- (id)noteStoreUrl;
- (void)setCommunicationEngineUrl:(id)arg1;
- (void)setMessageStoreUrl:(id)arg1;
- (void)setNoteStoreUrl:(id)arg1;
- (void)setUserStoreUrl:(id)arg1;
- (void)setUserWebSocketUrl:(id)arg1;
- (void)setUtilityUrl:(id)arg1;
- (void)setWebApiUrlPrefix:(id)arg1;
- (id)userStoreUrl;
- (id)userWebSocketUrl;
- (id)utilityUrl;
- (id)webApiUrlPrefix;

@end
