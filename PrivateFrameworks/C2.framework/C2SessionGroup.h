
@interface C2SessionGroup : NSObject {
    NSString * _configurationName;
    C2Session * _pinnedSession;
    C2Session * _pinnedSessionAllowingExpiredDNS;
    C2Session * _unpinnedSession;
}

@property (nonatomic, retain) NSString *configurationName;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, retain) C2Session *pinnedSession;
@property (nonatomic, retain) C2Session *pinnedSessionAllowingExpiredDNS;
@property (nonatomic, readonly) NSArray *sessions;
@property (nonatomic, retain) C2Session *unpinnedSession;

- (void).cxx_destruct;
- (id)configurationName;
- (id)initWithConfigurationName:(id)arg1;
- (bool)isEmpty;
- (id)pinnedSession;
- (id)pinnedSessionAllowingExpiredDNS;
- (bool)removeSession:(id)arg1;
- (id)sessionForOptions:(id)arg1;
- (id)sessions;
- (void)setConfigurationName:(id)arg1;
- (void)setPinnedSession:(id)arg1;
- (void)setPinnedSessionAllowingExpiredDNS:(id)arg1;
- (void)setSession:(id)arg1 forOptions:(id)arg2;
- (void)setUnpinnedSession:(id)arg1;
- (id)unpinnedSession;

@end
