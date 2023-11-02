
@interface ATXSpotlightAction : NSObject <ATXSuggestionExecutableProtocol, NSSecureCoding> {
    NSString * _actionDescription;
    NSString * _actionIdentifier;
    ATXActionCriteria * _criteria;
    SFTopic * _topic;
}

@property (nonatomic, readonly) NSString *actionDescription;
@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) ATXActionCriteria *criteria;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SFTopic *topic;

+ (id)_contactSuggestionResultWithId:(id)arg1 title:(id)arg2;
+ (id)_searchSuggestionResultWithString:(id)arg1;
+ (id)actionIdentifierFromTopic:(id)arg1;
+ (unsigned long long)instanceIdentifierFromTopic:(id)arg1;
+ (id)spotlightActionTypeFromTopic:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionDescription;
- (id)actionIdentifier;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)criteria;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactName:(id)arg1 contactEmail:(id)arg2 subtitle:(id)arg3 criteria:(id)arg4;
- (id)initWithContactName:(id)arg1 contactIdentifier:(id)arg2 subtitle:(id)arg3 criteria:(id)arg4;
- (id)initWithEntityName:(id)arg1 qid:(id)arg2 criteria:(id)arg3;
- (id)initWithFlightCode:(id)arg1 date:(id)arg2 criteria:(id)arg3;
- (id)initWithMediaName:(id)arg1 identifier:(id)arg2 criteria:(id)arg3;
- (id)initWithPOIName:(id)arg1 muid:(id)arg2 criteria:(id)arg3;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSportsTeamName:(id)arg1 qid:(id)arg2 criteria:(id)arg3;
- (id)initWithTopic:(id)arg1 criteria:(id)arg2 actionDescription:(id)arg3 actionIdentifier:(id)arg4;
- (id)initWithWeatherLatitude:(double)arg1 longitude:(double)arg2 criteria:(id)arg3;
- (id)initWithWeatherLocation:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 criteria:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)topic;

@end
