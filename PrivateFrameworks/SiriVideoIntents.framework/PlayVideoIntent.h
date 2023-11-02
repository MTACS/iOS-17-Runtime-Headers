
@interface PlayVideoIntent : INIntent

@property (nonatomic, copy) NSArray *allUmcIds;
@property (nonatomic, copy) NSArray *channelIds;
@property (nonatomic, retain) Content *content;
@property (nonatomic, retain) ContentSearch *contentSearch;
@property (nonatomic, retain) NSNumber *isRemoteExecution;
@property (nonatomic, copy) NSArray *suggestedContent;
@property (nonatomic, copy) NSArray *utsSearchParams;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
