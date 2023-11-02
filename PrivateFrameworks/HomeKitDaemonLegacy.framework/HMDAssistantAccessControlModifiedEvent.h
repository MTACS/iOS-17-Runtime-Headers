
@interface HMDAssistantAccessControlModifiedEvent : HMMLogEvent {
    bool  _areActivityNotificationsEnabledForPersonalRequests;
    bool  _isEnabled;
    unsigned long long  _numCapableAccessories;
    unsigned long long  _numEnabledAccessories;
    unsigned long long  _options;
}

@property (nonatomic) bool areActivityNotificationsEnabledForPersonalRequests;
@property (nonatomic) bool isEnabled;
@property (nonatomic) unsigned long long numCapableAccessories;
@property (nonatomic) unsigned long long numEnabledAccessories;
@property (nonatomic) unsigned long long options;

+ (id)eventWithIsEnabled:(bool)arg1 options:(unsigned long long)arg2 areActivityNotificationsEnabledForPersonalRequests:(bool)arg3 numEnabledAccessories:(unsigned long long)arg4 numCapableAccessories:(unsigned long long)arg5;

- (bool)areActivityNotificationsEnabledForPersonalRequests;
- (bool)isEnabled;
- (unsigned long long)numCapableAccessories;
- (unsigned long long)numEnabledAccessories;
- (unsigned long long)options;
- (void)setAreActivityNotificationsEnabledForPersonalRequests:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setNumCapableAccessories:(unsigned long long)arg1;
- (void)setNumEnabledAccessories:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
