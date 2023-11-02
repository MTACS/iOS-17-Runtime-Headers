
@interface ICFoldersFilterTypeSelection : ICFilterTypeSelection {
    NSArray * _folderIdentifiers;
    unsigned long long  _inclusionType;
    NSManagedObjectContext * _managedObjectContext;
}

@property (nonatomic, readonly) bool containsSharedFolder;
@property (nonatomic, retain) NSArray *folderIdentifiers;
@property (nonatomic, readonly, copy) NSString *folderSummaryList;
@property (nonatomic) unsigned long long inclusionType;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;

+ (id)keyPathsForValuesAffectingIsEmpty;

- (void).cxx_destruct;
- (void)addFolderIdentifier:(id)arg1;
- (bool)containsSharedFolder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)emptySummary;
- (id)emptySummaryTitle;
- (id)filterName;
- (long long)filterType;
- (id)folderIdentifiers;
- (id)folderSummaryList;
- (id)folderTitlesForIdentifiers:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)inclusionType;
- (id)initWithManagedObjectContext:(id)arg1 inclusionType:(unsigned long long)arg2 folderIdentifiers:(id)arg3;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToICFoldersFilterTypeSelection:(id)arg1;
- (bool)isValid;
- (id)managedObjectContext;
- (id)rawFilterValue;
- (void)removeFolderIdentifier:(id)arg1;
- (void)setFolderIdentifiers:(id)arg1;
- (void)setInclusionType:(unsigned long long)arg1;
- (id)shortEmptySummary;

@end
