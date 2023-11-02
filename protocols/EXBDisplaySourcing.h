
@protocol EXBDisplaySourcing <NSObject>

@required

- (void)addObserver:(id <EXBDisplaySourceObserving>)arg1;
- (FBSDisplayConfiguration *)configurationForIdentity:(FBSDisplayIdentity *)arg1;
- (NSSet *)connectedIdentities;
- (FBSDisplayConfiguration *)mainConfiguration;
- (FBSDisplayIdentity *)mainIdentity;
- (void)removeObserver:(id <EXBDisplaySourceObserving>)arg1;
- (void)updateTransformsWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
