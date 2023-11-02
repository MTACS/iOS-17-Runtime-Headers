
@protocol EDThreadQueryHandler <EDMessageRepositoryQueryHandler>

@required

- (NSArray *)inMemoryMessageObjectIDsForThread:(EMThread *)arg1;
- (<EMMessageListItem> *)messageListItemForObjectID:(EMObjectID *)arg1 isPersisted:(bool*)arg2 error:(id*)arg3;
- (EMThreadScope *)threadScope;

@end
