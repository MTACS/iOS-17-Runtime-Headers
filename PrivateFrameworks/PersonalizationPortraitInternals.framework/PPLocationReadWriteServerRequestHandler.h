
@interface PPLocationReadWriteServerRequestHandler : NSObject <PPLocationReadWriteServerProtocol>

- (void)clearWithCompletion:(id /* block */)arg1;
- (void)cloudSyncWithCompletion:(id /* block */)arg1;
- (void)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(bool)arg5 decayRate:(double)arg6 completion:(id /* block */)arg7;

@end
