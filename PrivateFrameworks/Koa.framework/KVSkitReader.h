
@interface KVSkitReader : NSObject <KVSkitReadAccess> {
    NSURL * _directoryURL;
    KVProvisionalResourceManager * _resourceManager;
    KVSkitWrapper * _skit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id /* block */)_activationBlock;
- (id /* block */)_deactivationBlock;
- (bool)deactivate;
- (void)dealloc;
- (id)indexLocale;
- (id)init;
- (id)initWithSkitDirectoryURL:(id)arg1;
- (id)initWithSkitDirectoryURL:(id)arg1 lifespan:(double)arg2;
- (id)matchSpans:(id)arg1 error:(id*)arg2;
- (void)prewarm;

@end
