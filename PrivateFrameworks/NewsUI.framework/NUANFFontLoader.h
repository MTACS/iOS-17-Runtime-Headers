
@interface NUANFFontLoader : NSObject <NUFontRegistrator> {
    FCANFContent * _anfContent;
    FCAsyncOnceOperation * _asyncOnceOperation;
    FCFlintResourceManager * _flintResourceManager;
    <NUFontRegistration> * _fontRegistration;
    NSMutableArray * _fontResourcesRegistered;
    NSMutableArray * _fontResourcesToRegister;
    bool  _hasLoaded;
    long long  _relativePriority;
}

@property (nonatomic, readonly) FCANFContent *anfContent;
@property (nonatomic, readonly) FCAsyncOnceOperation *asyncOnceOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (nonatomic, readonly) <NUFontRegistration> *fontRegistration;
@property (nonatomic, readonly) NSMutableArray *fontResourcesRegistered;
@property (nonatomic, readonly) NSMutableArray *fontResourcesToRegister;
@property (nonatomic, readonly) bool hasLoaded;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long relativePriority;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)anfContent;
- (id)asyncLoadFontsOnceWithCompletion:(id /* block */)arg1;
- (id)asyncOnceOperation;
- (id)flintResourceManager;
- (id)fontRegistration;
- (id)fontResourcesRegistered;
- (id)fontResourcesToRegister;
- (bool)hasLoaded;
- (id)initWithANFContent:(id)arg1 flintResourceManager:(id)arg2 fontRegistration:(id)arg3;
- (id)loadFontsWithCompletion:(id /* block */)arg1;
- (void)registerFontsWithCompletion:(id /* block */)arg1;
- (long long)relativePriority;
- (void)setRelativePriority:(long long)arg1;
- (void)unregisterFontsWithCompletion:(id /* block */)arg1;

@end
