
@interface CloseAppIntent : INIntent

@property (nonatomic) long long appNoun;
@property (nonatomic) long long appReference;
@property (nonatomic, retain) Application *application;
@property (nonatomic, retain) Application *requestedApplication;
@property (nonatomic, copy) NSArray *suggestedApplications;

+ (bool)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
