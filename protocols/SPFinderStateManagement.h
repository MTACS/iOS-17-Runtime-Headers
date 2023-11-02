
@protocol SPFinderStateManagement <NSObject>

@required

- (void)setStateInfoChangedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPFinderStateInfo *, void*
- (void)start;
- (id /* block */)stateInfoChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, SPFinderStateInfo *, void*, id, SEL
- (void)stateInfoWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPFinderStateInfo *, NSError *, void*

@end
