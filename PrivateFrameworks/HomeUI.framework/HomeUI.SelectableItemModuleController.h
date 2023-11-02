
@interface HomeUI.SelectableItemModuleController : HUItemModuleController {
    void delegate;
}

- (void).cxx_destruct;
- (bool)canSelectItem:(id)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;

@end
