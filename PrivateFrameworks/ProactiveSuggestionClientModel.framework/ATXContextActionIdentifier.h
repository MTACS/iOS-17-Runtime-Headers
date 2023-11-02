
@interface ATXContextActionIdentifier : NSObject <NSSecureCoding> {
    NSString * _context;
    NSString * _instanceId;
    NSString * _subtype;
}

@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) NSString *instanceId;
@property (nonatomic, readonly) NSString *subtype;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel

+ (id)_actionTypeFromShortcutsActionSuggestion:(id)arg1;
+ (unsigned long long)_instanceIdentifierFromShortcutsActionSuggestion:(id)arg1;
+ (id)_stringsWithPredictionReasons:(unsigned long long)arg1;
+ (id)actionTypeFromSpotlightActionType:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 subType:(id)arg2 instanceIdentifierInteger:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1 subtype:(id)arg2 instanceIdentifier:(id)arg3;
- (id)initWithProactiveSuggestion:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1;
- (id)instanceId;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXContextActionIdentifier:(id)arg1;
- (id)subtype;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

- (id)initWithTopic:(id)arg1 sectionBundleIdentifier:(id)arg2;

@end
