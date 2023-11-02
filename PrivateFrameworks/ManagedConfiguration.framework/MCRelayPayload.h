
@interface MCRelayPayload : MCPayload {
    NSArray * _excludedDomains;
    NSArray * _matchDomains;
    NSArray * _onDemandRules;
    NSString * _relayUUID;
    NSArray * _relays;
    bool  _restrictDomains;
}

@property (nonatomic, readonly, copy) NSDictionary *configurationDictionary;
@property (nonatomic, readonly, copy) NSArray *excludedDomains;
@property (nonatomic, readonly, copy) NSArray *matchDomains;
@property (nonatomic, readonly, copy) NSArray *onDemandRules;
@property (nonatomic, copy) NSString *relayUUID;
@property (nonatomic, readonly, copy) NSArray *relays;
@property (nonatomic, readonly) bool restrictDomains;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)configurationDictionary;
- (id)excludedDomains;
- (id)filterForUserEnrollmentOutError:(id*)arg1;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)matchDomains;
- (id)onDemandRules;
- (id)payloadDescriptionKeyValueSections;
- (id)relayUUID;
- (id)relays;
- (bool)restrictDomains;
- (void)setRelayUUID:(id)arg1;
- (id)stubDictionary;
- (id)verboseDescription;

@end
