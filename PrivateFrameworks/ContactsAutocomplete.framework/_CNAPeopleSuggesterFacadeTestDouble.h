
@interface _CNAPeopleSuggesterFacadeTestDouble : NSObject <CNAPeopleSuggesterFacade> {
    <_CNAPeopleSuggesterFacadeTestDoubleDelegate> * _delegate;
    NSMutableArray * _suggestions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <_CNAPeopleSuggesterFacadeTestDoubleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)makeContactWithDisplayName:(id)arg1;
+ (id)makeContactWithDisplayName:(id)arg1 handle:(id)arg2;
+ (id)makeRecipientWithDisplayName:(id)arg1 handle:(id)arg2;
+ (id)makeRecipientWithDisplayName:(id)arg1 handle:(id)arg2 hasContact:(bool)arg3;
+ (id)personWithDisplayName:(id)arg1 handle:(id)arg2 hasContact:(bool)arg3;

- (void).cxx_destruct;
- (id)addGroupWithDisplayName:(id)arg1 conversationIdentifier:(id)arg2 recipients:(id)arg3;
- (id)addPerson:(id)arg1;
- (void)addSuggestion:(id)arg1;
- (id)autocompleteSearchResultsWithPredictionContext:(id)arg1;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end
