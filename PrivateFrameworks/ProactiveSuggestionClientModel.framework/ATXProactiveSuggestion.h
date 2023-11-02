
@interface ATXProactiveSuggestion : NSObject <ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    ATXProactiveSuggestionClientModelSpecification * _clientModelSpecification;
    ATXProactiveSuggestionExecutableSpecification * _executableSpecification;
    unsigned long long  _hash;
    ATXProactiveSuggestionScoreSpecification * _scoreSpecification;
    ATXProactiveSuggestionUISpecification * _uiSpecification;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) unsigned long long applicableLayouts;
@property (nonatomic, readonly) ATXProactiveSuggestionClientModelSpecification *clientModelSpecification;
@property (nonatomic, readonly) NSString *criterion;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) ATXProactiveSuggestionExecutableSpecification *executableSpecification;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) ATXProactiveSuggestionScoreSpecification *scoreSpecification;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *suggestionIdentifier;
@property (nonatomic, readonly) ATXProactiveSuggestionUISpecification *uiSpecification;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *widgetBundleIdentifier;

// Image: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel

+ (id)protoSuggestionsFromSuggestions:(id)arg1;
+ (id)suggestionsFromProtoSuggestions:(id)arg1;
+ (bool)suggestionsHaveChangedFromPreviousSuggestions:(id)arg1 newSuggestions:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (unsigned long long)applicableLayouts;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)clientModelSpecification;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criterion;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)executableSpecification;
- (bool)fuzzyIsEqualToProactiveSuggestion:(id)arg1;
- (unsigned long long)hash;
- (id)infoSuggestion;
- (id)initWithClientModelSpecification:(id)arg1 executableSpecification:(id)arg2 uiSpecification:(id)arg3 scoreSpecification:(id)arg4;
- (id)initWithClientModelSpecification:(id)arg1 executableSpecification:(id)arg2 uiSpecification:(id)arg3 scoreSpecification:(id)arg4 uuid:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (bool)isValidForSuggestionsWidget;
- (id)jsonRawData;
- (id)metadata;
- (id)proto;
- (id)scoreSpecification;
- (id)startDate;
- (id)suggestionIdentifier;
- (id)uiSpecification;
- (id)uuid;
- (id)widgetBundleIdentifier;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)genericStringForExecutableObject:(id)arg1;

- (id)appClipHeroAppPredictionExecutableObject;
- (id)atxActionCriteria;
- (id)atxActionExecutableObject;
- (id)atxInfoSuggestionExecutableObject;
- (id)atxShortcutsActionExecutableObject;
- (id)atxSpotlightActionExecutableObject;
- (id)bundleIdExecutableObject;
- (id)genericStringForSuggestionExecutableObject;
- (id)heroDataExecutableObject;
- (id)linkActionExecutableObject;

@end
