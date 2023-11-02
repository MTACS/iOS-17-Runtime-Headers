
@interface ATXHeuristicReturnCall : NSObject <ATXContextHeuristicProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_actionWithCall:(id)arg1 contactDict:(id)arg2 contactId:(id)arg3 handle:(id)arg4 service:(id)arg5;
- (void)_addActionWithContactId:(id)arg1 toActions:(id)arg2 environment:(id)arg3 lastCallDict:(id)arg4;
- (id)_bestContactHandleFromDataSourceWithContact:(id)arg1 service:(id)arg2 environment:(id)arg3;
- (id)_contactsDataSourceWithIdentifiers:(id)arg1 environment:(id)arg2;
- (id)_duetInteractionCountFromDataSourceWithHandles:(id)arg1 date:(id)arg2 environment:(id)arg3;
- (id)_interactionCountAfterCall:(id)arg1 contactDict:(id)arg2 environment:(id)arg3;
- (id)_serviceWithCall:(id)arg1;
- (id)heuristicResultWithEnvironment:(id)arg1;
- (id)permanentRefreshTriggers;

@end
