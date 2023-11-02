
@interface ATXHeuristicNowPlaying : NSObject <ATXContextHeuristicProtocol> {
    _PASLazyResult * _mediaRemoteNowPlaying;
    NSString * _persistenceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)heuristicResultWithEnvironment:(id)arg1;
- (id)init;
- (id)initWithPersistenceIdentifier:(id)arg1;
- (id)permanentRefreshTriggers;

@end
