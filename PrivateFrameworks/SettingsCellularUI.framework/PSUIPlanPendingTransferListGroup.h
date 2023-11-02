
@interface PSUIPlanPendingTransferListGroup : NSObject <PSSpecifierGroup>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)specifiers;

@end
