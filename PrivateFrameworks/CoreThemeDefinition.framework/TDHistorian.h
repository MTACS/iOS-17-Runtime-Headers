
@interface TDHistorian : NSObject {
    CoreThemeDocument * document;
}

- (void)_updateEntryForManagedObject:(id)arg1;
- (id)_updateRecordsWithName:(id)arg1 sinceDate:(id)arg2;
- (id)colorsChangedSinceDate:(id)arg1;
- (id)facetDefinitionsChangedSinceDate:(id)arg1;
- (id)fontSizesChangedSinceDate:(id)arg1;
- (id)fontsChangedSinceDate:(id)arg1;
- (bool)foundDataChangesSinceDate:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)keySpecsForRenditionsRemovedSinceDate:(id)arg1;
- (id)namedElementsChangedSinceDate:(id)arg1;
- (id)productionsChangedSinceDate:(id)arg1 uuidNeedsReset:(bool*)arg2;
- (id)productionsWithModifiedAssets;
- (void)updateEntriesForManagedObjects:(id)arg1;

@end
