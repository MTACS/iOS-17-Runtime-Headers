
@interface ATXActivity : NSObject {
    unsigned long long  _activityType;
    bool  _allowsSmartEntry;
    unsigned long long  _location;
    NSString * _modeUUID;
    long long  _origin;
    NSString * _originAnchorType;
    NSString * _originBundleId;
    bool  _shouldSuggestTriggers;
    NSString * _suggestionUUID;
    NSArray * _triggers;
    NSString * _userModeName;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) bool allowsSmartEntry;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedSuggestionReason;
@property (nonatomic, readonly) unsigned long long location;
@property (nonatomic, readonly, copy) NSString *modeUUID;
@property (nonatomic, readonly) long long origin;
@property (nonatomic, readonly, copy) NSString *originAnchorType;
@property (nonatomic, readonly, copy) NSString *originBundleId;
@property (nonatomic, readonly) bool shouldSuggestTriggers;
@property (nonatomic, readonly, copy) NSString *suggestionUUID;
@property (nonatomic, readonly) NSArray *triggers;
@property (nonatomic, readonly, copy) NSString *userModeName;

- (void).cxx_destruct;
- (id)_anchorSuggestionReasonLocalizationKey;
- (id)_heuristicSuggestionReasonLocalizationKey;
- (id)_suggestionReasonLocalizationKey;
- (unsigned long long)activityType;
- (bool)allowsSmartEntry;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithBMInferredModeEvent:(id)arg1;
- (id)initWithModeUUID:(id)arg1 userModeName:(id)arg2 activityType:(unsigned long long)arg3 origin:(long long)arg4 originBundleId:(id)arg5 originAnchorType:(id)arg6 allowsSmartEntry:(bool)arg7 suggestionUUID:(id)arg8 triggers:(id)arg9 location:(unsigned long long)arg10 shouldSuggestTriggers:(bool)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXActivity:(id)arg1;
- (id)localizedSuggestionReason;
- (unsigned long long)location;
- (id)modeUUID;
- (long long)origin;
- (id)originAnchorType;
- (id)originBundleId;
- (bool)shouldSuggestTriggers;
- (id)suggestionUUID;
- (id)triggers;
- (id)userModeName;

@end
