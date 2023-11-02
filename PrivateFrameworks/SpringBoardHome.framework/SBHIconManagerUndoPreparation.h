
@interface SBHIconManagerUndoPreparation : NSObject <SBHUndoPreparation> {
    SBHIconManager * _iconManager;
    <SBHUndoObserving> * _observer;
    SBRootFolder * _originalRootFolder;
    SBRootFolder * _unmodifiedOriginalRootFolder;
}

@property (nonatomic, readonly) SBHIconManager *iconManager;
@property (nonatomic) <SBHUndoObserving> *observer;
@property (nonatomic, readonly) SBRootFolder *originalRootFolder;
@property (nonatomic, readonly, copy) SBRootFolder *unmodifiedOriginalRootFolder;

- (void).cxx_destruct;
- (id)iconManager;
- (id)initWithIconManager:(id)arg1;
- (id)observer;
- (id)originalRootFolder;
- (void)registerWithUndoManager:(id)arg1 actionName:(id)arg2 observer:(id)arg3;
- (void)setObserver:(id)arg1;
- (id)unmodifiedOriginalRootFolder;

@end
