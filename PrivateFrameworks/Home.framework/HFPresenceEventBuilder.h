
@interface HFPresenceEventBuilder : HFEventBuilder <HFLocationEventBuilder> {
    unsigned long long  _activationGranularity;
    unsigned long long  _locationEventType;
    HFSelectedUserCollection * _users;
}

@property (nonatomic) unsigned long long activationGranularity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long locationEventType;
@property (nonatomic, readonly) unsigned long long presenceEventType;
@property (nonatomic, readonly) unsigned long long presenceUserType;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFSelectedUserCollection *users;

+ (id)_selectedUsersForPresenceEvent:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)activationGranularity;
- (id)buildNewEventsFromCurrentState;
- (id)compareToObject:(id)arg1;
- (id)comparisonKey;
- (id)description;
- (id)eventType;
- (id)initWithEvent:(id)arg1;
- (unsigned long long)locationEventType;
- (id)naturalLanguageNameWithOptions:(id)arg1;
- (unsigned long long)presenceEventType;
- (unsigned long long)presenceUserType;
- (void)setActivationGranularity:(unsigned long long)arg1;
- (void)setLocationEventType:(unsigned long long)arg1;
- (void)setUsers:(id)arg1;
- (id)users;

@end
