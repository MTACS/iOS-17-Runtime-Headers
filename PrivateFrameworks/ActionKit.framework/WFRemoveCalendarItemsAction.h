
@interface WFRemoveCalendarItemsAction : WFAction

- (id)accessResource;
- (id)contentDestinationWithError:(id*)arg1;
- (Class)contentItemClass;
- (void)deleteItems:(id)arg1;
- (unsigned long long)entityType;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end
