
@interface ISClient : NSObject {
    NSString * _appleClientApplication;
    NSString * _appleClientVersions;
    NSDictionary * _clientProvidedHeaders;
    NSString * _identifier;
    NSLock * _lock;
    NSString * _partnerHeader;
    NSString * _userAgent;
}

@property (copy) NSString *appleClientApplication;
@property (readonly) NSString *appleClientVersions;
@property (copy) NSDictionary *clientProvidedHeaders;
@property (copy) NSString *identifier;
@property (nonatomic, retain) NSLock *lock;
@property (copy) NSString *partnerHeader;
@property (copy) NSString *userAgent;

+ (id)currentClient;

- (void).cxx_destruct;
- (id)_appleClientVersions;
- (void)_softwareMapInvalidatedNotification:(id)arg1;
- (id)appleClientApplication;
- (id)appleClientVersions;
- (id)clientProvidedHeaders;
- (void)dealloc;
- (id)identifier;
- (id)init;
- (id)localStoreFrontID;
- (id)lock;
- (id)partnerHeader;
- (void)setAppleClientApplication:(id)arg1;
- (void)setClientProvidedHeaders:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setPartnerHeader:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)userAgent;

@end
