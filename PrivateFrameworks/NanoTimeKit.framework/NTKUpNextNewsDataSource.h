
@interface NTKUpNextNewsDataSource : REElementDataSource {
    NTKUpNextElementDataSource * _newsDataSourceProxy;
}

@property (nonatomic, retain) NTKUpNextElementDataSource *newsDataSourceProxy;

+ (id)bundleIdentifier;
+ (unsigned long long)elementContentMode;
+ (Class)nanoNewsDataSourceClass;
+ (bool)wantsReloadForSignificantTimeChange;

- (void).cxx_destruct;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getElementsInSection:(id)arg1 withHandler:(id /* block */)arg2;
- (id)init;
- (id)newsDataSourceProxy;
- (void)pause;
- (void)resume;
- (void)setAllowsLocationUse:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNewsDataSourceProxy:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)supportedSections;

@end
