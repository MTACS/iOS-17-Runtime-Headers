
@interface SBSystemActionAbstractDataSource : NSObject <SBSystemActionDataSource> {
    NSHashTable * _observers;
    SBSystemAction * _selectedSystemAction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBSystemAction *selectedSystemAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)executorForSystemAction:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;
- (id)selectedSystemAction;
- (void)setSelectedSystemAction:(id)arg1;
- (void)updateSelectedAction;

@end
