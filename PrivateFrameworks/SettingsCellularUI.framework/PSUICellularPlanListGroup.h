
@interface PSUICellularPlanListGroup : NSObject <PSSpecifierGroup>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)danglingPlanPressed:(id)arg1;
- (id)danglingPlanSpecifierDetailText:(id)arg1;
- (id)getLogger;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)planSpecifierDetailText:(id)arg1;
- (id)specifiers;

@end
