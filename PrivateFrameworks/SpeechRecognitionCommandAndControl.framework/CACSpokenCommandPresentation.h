
@interface CACSpokenCommandPresentation : NSObject {
    NSDictionary * _additionalCommandInfo;
    NSArray * _allCommandGroups;
    NSArray * _commandGroups;
    NSArray * _commandItems;
    NSArray * _commandsOnly;
    NSDictionary * _conflictDictionary;
    NSMutableArray * _deletedCommandIdentifiers;
    NSSet * _excludedSearchWordSet;
    NSArray * _externalCommandGroups;
    NSString * _locale;
    NSMutableArray * _newCommandItems;
    NSArray * _relevantCommandIdentifiers;
    NSString * _searchString;
    bool  _usedByPreferences;
}

@property (nonatomic, retain) NSDictionary *additionalCommandInfo;
@property (nonatomic, retain) NSArray *externalCommandGroups;
@property (nonatomic, readonly) NSArray *flattenedCommandGroupsAndItems;
@property (readonly) bool isSearching;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, readonly) NSArray *nestedCommandGroupsAndItems;
@property (nonatomic, retain) NSArray *relevantCommandIdentifiers;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) bool usedByPreferences;

- (void).cxx_destruct;
- (void)_deepFlush;
- (id)_filteredCommandGroupsAndItemsWithSearchString:(id)arg1;
- (void)_flushCommands;
- (void)addCustomCommandItem:(id)arg1;
- (id)additionalCommandInfo;
- (void)deleteCustomCommandAtIndex:(unsigned long long)arg1;
- (void)discardChanges;
- (id)externalCommandGroups;
- (id)flattenedCommandGroupsAndItems;
- (bool)groupIsCollapsed:(id)arg1;
- (bool)hasConflicts;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1 ignoreGroups:(bool)arg2;
- (id)init;
- (bool)isSearching;
- (id)itemsConflictingWithItem:(id)arg1;
- (id)locale;
- (id)nestedCommandGroupsAndItems;
- (void)refreshItemWithIdentifier:(id)arg1;
- (id)relevantCommandIdentifiers;
- (void)resetConflicts;
- (void)saveChanges;
- (id)searchString;
- (void)setAdditionalCommandInfo:(id)arg1;
- (void)setExternalCommandGroups:(id)arg1;
- (void)setGroup:(id)arg1 isCollapsed:(bool)arg2;
- (void)setLocale:(id)arg1;
- (void)setRelevantCommandIdentifiers:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setUsedByPreferences:(bool)arg1;
- (void)sortCustomCommands;
- (bool)usedByPreferences;

@end
