
@interface RMUIPluginViewModelProvider : NSObject {
    RMObserverStore * _observerStore;
    NSMutableArray * _pluginSectionViewModels;
    NSMutableArray * _pluginViewModels;
}

@property (nonatomic, retain) RMObserverStore *observerStore;
@property (nonatomic, retain) NSMutableArray *pluginSectionViewModels;
@property (nonatomic, retain) NSMutableArray *pluginViewModels;

- (void).cxx_destruct;
- (void)_addModel:(id)arg1 toSection:(id)arg2;
- (id)_modelForDeclarationInfo:(id)arg1;
- (id)_sectionNameForDeclarationType:(id)arg1;
- (short)_symbolForDeclarationType:(id)arg1;
- (void)_updateViewModelsWithDeclarations:(id)arg1;
- (id)init;
- (void)loadPluginsFromConfigurationsWithCompletionHandler:(id /* block */)arg1;
- (id)observerStore;
- (id)pluginSectionViewModels;
- (id)pluginViewModels;
- (void)setObserverStore:(id)arg1;
- (void)setPluginSectionViewModels:(id)arg1;
- (void)setPluginViewModels:(id)arg1;

@end
