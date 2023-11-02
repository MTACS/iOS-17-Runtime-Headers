
@interface WorkflowUI.LibraryDataSource : _TtCs12_SwiftObject <WFDatabaseResultObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isEditing;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _layoutMode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _selectedWorkflowIds;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _sortedSections;
    void canChangeLayoutModes;
    void database;
    void libraryDelegate;
    void observeChanges;
    void observedResults;
    void onSortComparatorChanged;
    void searchPredicate;
    void sections;
    void shortcutMoveService;
    void shouldReload;
    void sortOrderComparators;
}

- (void)databaseResultDidChange:(id)arg1;

@end
