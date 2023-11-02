
@interface PRSWallpaperLocationStateObserver : NSObject {
    id /* block */  _handler;
    unsigned long long  _locations;
    bool  _needsSandboxExtensions;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) unsigned long long locations;
@property (nonatomic) bool needsSandboxExtensions;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)init;
- (unsigned long long)locations;
- (bool)needsSandboxExtensions;
- (void)setHandler:(id /* block */)arg1;
- (void)setLocations:(unsigned long long)arg1;
- (void)setNeedsSandboxExtensions:(bool)arg1;

@end
