
@interface MPMediaLibraryPrivacyContext : NSObject {
    PAApplication * _clientApplication;
    MPGreenTeaLoggerWrapper * _gtLogger;
    PAAccessInterval * _privacyAccessInterval;
}

+ (id)contextForDefaultClient;
+ (void)initialize;
+ (void)setDefaultClientWithAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)sharedContextForCurrentProcess;

- (void).cxx_destruct;
- (void)beginAccessInterval;
- (void)endAccessInterval;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithClientIdentity:(id)arg1;
- (id)initWithPAApplication:(id)arg1;
- (void)logPrivacyAccess;

@end
