
@interface HUExpandableItemContainerModule : HFItemModule

@property (nonatomic, readonly) NSArray *expandableModules;

- (id)expandableModuleForItem:(id)arg1;
- (id)expandableModules;
- (bool)isOptionItem:(id)arg1;
- (bool)isShowOptionsItem:(id)arg1;
- (void)setModuleExpanded:(bool)arg1 forItem:(id)arg2;
- (bool)shouldExpandModuleForShowOptionsItem:(id)arg1;

@end
