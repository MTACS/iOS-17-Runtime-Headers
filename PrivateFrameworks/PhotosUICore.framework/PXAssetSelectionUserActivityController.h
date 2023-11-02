
@interface PXAssetSelectionUserActivityController : NSObject <NSUserActivityDelegate, PXChangeObserver> {
    bool  _active;
    NSUserActivity * _currentUserActivity;
    bool  _hasSelection;
    PXSectionedSelectionManager * _selectionManager;
    PXSelectionSnapshot * _selectionSnapshot;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _snapshotLock;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) NSUserActivity *currentUserActivity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSelection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateActivity;
- (id)currentUserActivity;
- (void)dealloc;
- (bool)hasSelection;
- (id)init;
- (id)initWithSelectionManager:(id)arg1;
- (bool)isActive;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)selectionManager;
- (id)selectionSnapshot;
- (void)setActive:(bool)arg1;
- (void)setCurrentUserActivity:(id)arg1;
- (void)setHasSelection:(bool)arg1;
- (void)setSelectionManager:(id)arg1;
- (void)setSelectionSnapshot:(id)arg1;
- (void)userActivityWillSave:(id)arg1;

@end
