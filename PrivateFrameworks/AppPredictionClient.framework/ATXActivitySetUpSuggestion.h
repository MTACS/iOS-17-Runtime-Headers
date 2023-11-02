
@interface ATXActivitySetUpSuggestion : NSObject <ATXActivitySuggestion> {
    ATXActivity * _activity;
}

@property (nonatomic, readonly) ATXActivity *activity;
@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) bool allowsSetUpWithoutConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long location;
@property (nonatomic, readonly, copy) NSString *suggestionUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *triggers;

- (void).cxx_destruct;
- (id)activity;
- (unsigned long long)activityType;
- (bool)allowsSetUpWithoutConfiguration;
- (unsigned long long)hash;
- (id)init;
- (id)initWithActivity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXActivitySetUpSuggestion:(id)arg1;
- (unsigned long long)location;
- (id)suggestionUUID;
- (id)triggers;

@end
