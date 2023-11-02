
@protocol SXComponentInserterManager <SXComponentInserterProvider>

@required

- (void)addInserter:(id <SXComponentInserter>)arg1;
- (void)removeInserter:(id <SXComponentInserter>)arg1;

@end
