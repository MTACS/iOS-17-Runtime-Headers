
@interface ATXModeConfigurationUIFlowMetric : _ATXCoreAnalyticsMetric {
    NSString * _modeConfigurationUI;
    NSString * _modeSemanticType;
    NSString * _modeUUID;
    unsigned long long  _numAppsAdded;
    unsigned long long  _numAppsRemoved;
    unsigned long long  _numAppsSuggested;
    unsigned long long  _numContactsAdded;
    unsigned long long  _numContactsRemoved;
    unsigned long long  _numContactsSuggested;
    unsigned long long  _numExistingAllowedApps;
    unsigned long long  _numExistingAllowedContacts;
    unsigned long long  _numSuggestedAppsAdded;
    unsigned long long  _numSuggestedAppsRemoved;
    unsigned long long  _numSuggestedContactsAdded;
    unsigned long long  _numSuggestedContactsRemoved;
}

@property (nonatomic, retain) NSString *modeConfigurationUI;
@property (nonatomic, retain) NSString *modeSemanticType;
@property (nonatomic, retain) NSString *modeUUID;
@property (nonatomic) unsigned long long numAppsAdded;
@property (nonatomic) unsigned long long numAppsRemoved;
@property (nonatomic) unsigned long long numAppsSuggested;
@property (nonatomic) unsigned long long numContactsAdded;
@property (nonatomic) unsigned long long numContactsRemoved;
@property (nonatomic) unsigned long long numContactsSuggested;
@property (nonatomic) unsigned long long numExistingAllowedApps;
@property (nonatomic) unsigned long long numExistingAllowedContacts;
@property (nonatomic) unsigned long long numSuggestedAppsAdded;
@property (nonatomic) unsigned long long numSuggestedAppsRemoved;
@property (nonatomic) unsigned long long numSuggestedContactsAdded;
@property (nonatomic) unsigned long long numSuggestedContactsRemoved;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)metricName;
- (id)modeConfigurationUI;
- (id)modeSemanticType;
- (id)modeUUID;
- (unsigned long long)numAppsAdded;
- (unsigned long long)numAppsRemoved;
- (unsigned long long)numAppsSuggested;
- (unsigned long long)numContactsAdded;
- (unsigned long long)numContactsRemoved;
- (unsigned long long)numContactsSuggested;
- (unsigned long long)numExistingAllowedApps;
- (unsigned long long)numExistingAllowedContacts;
- (unsigned long long)numSuggestedAppsAdded;
- (unsigned long long)numSuggestedAppsRemoved;
- (unsigned long long)numSuggestedContactsAdded;
- (unsigned long long)numSuggestedContactsRemoved;
- (void)setModeConfigurationUI:(id)arg1;
- (void)setModeSemanticType:(id)arg1;
- (void)setModeUUID:(id)arg1;
- (void)setNumAppsAdded:(unsigned long long)arg1;
- (void)setNumAppsRemoved:(unsigned long long)arg1;
- (void)setNumAppsSuggested:(unsigned long long)arg1;
- (void)setNumContactsAdded:(unsigned long long)arg1;
- (void)setNumContactsRemoved:(unsigned long long)arg1;
- (void)setNumContactsSuggested:(unsigned long long)arg1;
- (void)setNumExistingAllowedApps:(unsigned long long)arg1;
- (void)setNumExistingAllowedContacts:(unsigned long long)arg1;
- (void)setNumSuggestedAppsAdded:(unsigned long long)arg1;
- (void)setNumSuggestedAppsRemoved:(unsigned long long)arg1;
- (void)setNumSuggestedContactsAdded:(unsigned long long)arg1;
- (void)setNumSuggestedContactsRemoved:(unsigned long long)arg1;

@end
