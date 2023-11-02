
@interface HUAccessoryDebugModuleController : HUItemModuleController <HUSwitchCellDelegate> {
    NSMapTable * _cellToItemMap;
}

@property (retain) NSMapTable *cellToItemMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUAccessoryDebugModule *module;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)cellToItemMap;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (void)setCellToItemMap:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
