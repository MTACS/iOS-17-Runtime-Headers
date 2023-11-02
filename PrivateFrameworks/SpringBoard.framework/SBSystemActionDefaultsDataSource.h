
@interface SBSystemActionDefaultsDataSource : SBSystemActionAbstractOverridableDataSource {
    SBSystemActionDefaults * _defaults;
}

- (void).cxx_destruct;
- (id)executorForSystemAction:(id)arg1;
- (void)updateSelectedAction;

@end
