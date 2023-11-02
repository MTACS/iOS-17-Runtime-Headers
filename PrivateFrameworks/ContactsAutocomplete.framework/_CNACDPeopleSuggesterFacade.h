
@interface _CNACDPeopleSuggesterFacade : NSObject <CNACDPeopleSuggesterFacade>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)suggestPeopleWithContext:(id)arg1 settings:(id)arg2 error:(id*)arg3;

@end
