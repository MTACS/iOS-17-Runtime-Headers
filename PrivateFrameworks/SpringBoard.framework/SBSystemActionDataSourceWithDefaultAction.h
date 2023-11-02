
@interface SBSystemActionDataSourceWithDefaultAction : NSObject <SBSystemActionDataSource> {
    SBSystemAction * _defaultAction;
    <SBSystemActionDataSource> * _innerDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBSystemAction *selectedSystemAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)executorForSystemAction:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)selectedSystemAction;

@end
