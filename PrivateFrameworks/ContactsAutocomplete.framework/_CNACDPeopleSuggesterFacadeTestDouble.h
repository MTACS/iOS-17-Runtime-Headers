
@interface _CNACDPeopleSuggesterFacadeTestDouble : NSObject <CNACDPeopleSuggesterFacade> {
    <_CNACDPeopleSuggesterFacadeTestDoubleDelegate> * _delegate;
    NSMutableArray * _suggestions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <_CNACDPeopleSuggesterFacadeTestDoubleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addPersonWithDisplayName:(id)arg1 handle:(id)arg2 contactIdentifier:(id)arg3;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)suggestPeopleWithContext:(id)arg1 settings:(id)arg2 error:(id*)arg3;
- (unsigned long long)typeOfHandle:(id)arg1;

@end
