
@interface LaunchAppIntent : INIntent

@property (nonatomic, retain) Application *application;
@property (nonatomic, retain) InAppSearchCriteria *inAppSearch;
@property (nonatomic, retain) NSNumber *isInCarPlay;
@property (nonatomic, retain) NSNumber *isNLv4Parse;
@property (nonatomic, retain) NSNumber *isRemoteExecution;
@property (nonatomic, retain) Application *requestedApplication;
@property (nonatomic, retain) NSNumber *smartSelectApps;
@property (nonatomic, copy) NSArray *suggestedApplications;

+ (bool)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
