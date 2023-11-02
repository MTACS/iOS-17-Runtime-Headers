
@interface _UICommandMenuDeletion : _UICommandChange

@property (nonatomic, readonly) NSString *anchor;

+ (id)deletionWithAnchor:(id)arg1;

- (bool)acceptBoolItemInsertionVisit:(id /* block */)arg1 itemDeletionVisit:(id /* block */)arg2 menuInsertionVisit:(id /* block */)arg3 menuDeletionVisit:(id /* block */)arg4;
- (void)acceptItemInsertionVisit:(id /* block */)arg1 itemDeletionVisit:(id /* block */)arg2 menuInsertionVisit:(id /* block */)arg3 menuDeletionVisit:(id /* block */)arg4;
- (id)initWithAnchor:(id)arg1;

@end
