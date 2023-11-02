
@interface SearchForSportsIntent : INIntent

@property (nonatomic, copy) NSString *athleteName;
@property (nonatomic, copy) NSString *athleteQId;
@property (nonatomic, copy) NSString *leagueName;
@property (nonatomic, copy) NSString *leagueQId;
@property (nonatomic, copy) NSString *sportName;
@property (nonatomic, copy) NSString *sportQId;
@property (nonatomic, copy) NSString *teamName;
@property (nonatomic, copy) NSString *teamQId;

// Image: /System/Library/PrivateFrameworks/SiriInferenceIntents.framework/SiriInferenceIntents

- (id)init;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriInference.framework/SiriInference

+ (bool)supportsSecureCoding;

@end
