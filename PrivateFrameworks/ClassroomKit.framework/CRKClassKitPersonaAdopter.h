
@interface CRKClassKitPersonaAdopter : NSObject {
    NSString * _currentPersonaUniqueString;
    CRKClassKitCurrentUserProvider * _currentUserProvider;
    <CRKPersonaBlockPerforming> * _personaBlockPerformer;
    NSMutableArray * _stashedBlocks;
}

@property (nonatomic, copy) NSString *currentPersonaUniqueString;
@property (nonatomic, readonly) CRKClassKitCurrentUserProvider *currentUserProvider;
@property (nonatomic, readonly) <CRKPersonaBlockPerforming> *personaBlockPerformer;
@property (nonatomic, readonly) NSMutableArray *stashedBlocks;

+ (id)currentUserProviderObservedKeyPaths;

- (void).cxx_destruct;
- (void)callStashedBlocks;
- (void)callStashedBlocksIfPersonaFetched;
- (id)captureStashedBlocks;
- (id)currentPersonaUniqueString;
- (void)currentUserChanged;
- (id)currentUserProvider;
- (void)dealloc;
- (id)initWithClassKitFacade:(id)arg1 personaBlockPerformer:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performBlockWithClassKitPersona:(id /* block */)arg1;
- (id)personaBlockPerformer;
- (bool)personaFetched;
- (void)setCurrentPersonaUniqueString:(id)arg1;
- (id)stashedBlocks;

@end
