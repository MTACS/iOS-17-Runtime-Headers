
@interface PlayLiveServiceIntent : INIntent

@property (nonatomic, retain) NSNumber *isRemoteExecution;
@property (nonatomic, retain) LiveService *liveService;
@property (nonatomic, copy) NSArray *localServiceResults;
@property (nonatomic, copy) NSString *serviceNameSearch;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
