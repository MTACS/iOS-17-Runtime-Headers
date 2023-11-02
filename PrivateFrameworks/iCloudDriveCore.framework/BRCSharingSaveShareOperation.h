
@interface BRCSharingSaveShareOperation : BRCSharingModifyShareOperation

- (id)createActivity;
- (id)initWithShare:(id)arg1 zone:(id)arg2;
- (void)main;
- (void)performAfterUnsharingParentShareTurdIfNecessary:(id /* block */)arg1;

@end
