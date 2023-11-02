
@interface WFTrelloGetItemsAction : WFAction

- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)updateBoards:(id)arg1 onAccount:(id)arg2;
- (void)updateListCache:(id)arg1 board:(id)arg2 account:(id)arg3;

@end
