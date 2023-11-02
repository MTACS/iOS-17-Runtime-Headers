
@interface WFParameterValuePickerDataSource : UITableViewDiffableDataSource {
    NSSet * _allowedVariableTypes;
    INObjectCollection * _collection;
    UILocalizedIndexedCollation * _localizedCollation;
    WFParameter<WFParameterValuePickable> * _parameter;
    <WFVariableProvider> * _variableProvider;
    <WFVariableUIDelegate> * _variableUIDelegate;
}

@property (nonatomic, copy) NSSet *allowedVariableTypes;
@property (nonatomic, retain) INObjectCollection *collection;
@property (nonatomic, readonly) unsigned long long itemsCount;
@property (nonatomic, readonly) UILocalizedIndexedCollation *localizedCollation;
@property (nonatomic, readonly) WFParameter<WFParameterValuePickable> *parameter;
@property (nonatomic, readonly) unsigned long long sectionsCount;
@property (nonatomic) <WFVariableProvider> *variableProvider;
@property (nonatomic) <WFVariableUIDelegate> *variableUIDelegate;

+ (id)variableSectionIdentifier;

- (void).cxx_destruct;
- (id)allowedVariableTypes;
- (void)applyCollection:(id)arg1 animatingDifferences:(bool)arg2 filterVariableTitle:(id)arg3;
- (void)applyCollection:(id)arg1 animatingDifferences:(bool)arg2 filterVariableTitle:(id)arg3 completion:(id /* block */)arg4;
- (void)applyEmptyCollectionAnimatingDifferences:(bool)arg1 completion:(id /* block */)arg2;
- (id)collection;
- (id)displayVariables;
- (id)displayVariablesWithTitle:(id)arg1;
- (id)initWithParameter:(id)arg1 tableView:(id)arg2 cellProvider:(id /* block */)arg3;
- (unsigned long long)itemsCount;
- (id)localizedCollation;
- (id)parameter;
- (id)parameterStateAtIndexPath:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (unsigned long long)sectionsCount;
- (void)setAllowedVariableTypes:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (id)snapshotForCollection:(id)arg1 filterVariableTitle:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)variableProvider;
- (id)variableUIDelegate;

@end
