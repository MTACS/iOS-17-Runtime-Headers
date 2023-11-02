
@interface RMKeyValueViewController : PSListController {
    RMUIKeyValueViewModel * _viewModel;
}

@property (nonatomic, retain) RMUIKeyValueViewModel *viewModel;

- (void).cxx_destruct;
- (id)_keyValueDetailValue:(id)arg1;
- (void)_processUserInfoDictionary;
- (id)_specifiersForKeyValues;
- (void)setViewModel:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;

@end
