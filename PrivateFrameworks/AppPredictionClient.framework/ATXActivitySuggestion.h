
@interface ATXActivitySuggestion : NSObject <ATXActivitySuggestion> {
    ATXActivity * _activity;
}

@property (nonatomic, readonly) ATXActivity *activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long location;
@property (nonatomic, readonly, copy) NSString *suggestionUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *triggers;
@property (nonatomic, readonly, copy) NSString *uuidString;

- (void).cxx_destruct;
- (id)activity;
- (unsigned long long)hash;
- (id)init;
- (id)initWithActivity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXActivitySuggestion:(id)arg1;
- (unsigned long long)location;
- (id)suggestionUUID;
- (id)triggers;
- (id)uuidString;

@end
