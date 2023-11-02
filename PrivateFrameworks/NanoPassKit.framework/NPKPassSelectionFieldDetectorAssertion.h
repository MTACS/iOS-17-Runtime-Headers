
@interface NPKPassSelectionFieldDetectorAssertion : NPKTransientAssertion {
    <NPKPassSelectionFieldDetectorAssertionDelegate> * _delegate;
}

@property (nonatomic) <NPKPassSelectionFieldDetectorAssertionDelegate> *delegate;

- (void).cxx_destruct;
- (void)_resyncState;
- (id)delegate;
- (void)didEnterFieldForPassesWithUniqueIDs:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
