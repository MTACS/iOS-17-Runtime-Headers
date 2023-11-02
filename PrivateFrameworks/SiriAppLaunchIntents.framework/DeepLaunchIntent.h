
@interface DeepLaunchIntent : INIntent

@property (nonatomic, copy) NSArray *pageCanonicalNames;
@property (nonatomic, copy) NSString *pageName;
@property (nonatomic, retain) Application *requestedApplication;

+ (bool)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end