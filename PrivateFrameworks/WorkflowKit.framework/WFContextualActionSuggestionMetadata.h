
@interface WFContextualActionSuggestionMetadata : NSObject {
    NSUUID * _sessionUUID;
    NSUUID * _suggestionUUID;
}

@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) NSUUID *suggestionUUID;

- (void).cxx_destruct;
- (id)initWithSuggestionUUID:(id)arg1 sessionUUID:(id)arg2;
- (id)sessionUUID;
- (id)suggestionUUID;

@end
