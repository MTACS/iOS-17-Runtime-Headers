
@interface NPKStandaloneProvisioningNumericEntryCoordinator : NSObject {
    NSMutableArray * _completedFields;
    id /* block */  _completionHandler;
    unsigned long long  _currentIndex;
    NSArray * _providedFields;
}

@property (nonatomic, retain) NSMutableArray *completedFields;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic, retain) NSArray *providedFields;

- (void).cxx_destruct;
- (void)_invokeCompletionHandler;
- (void)_showCurrentPasscodePromptOrComplete;
- (void)_showNextPasscodePromptOrComplete;
- (id)completedFields;
- (id /* block */)completionHandler;
- (unsigned long long)currentIndex;
- (void)invalidate;
- (id)providedFields;
- (void)requestNumericInputForFields:(id)arg1 completion:(id /* block */)arg2;
- (void)setCompletedFields:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)setProvidedFields:(id)arg1;

@end
