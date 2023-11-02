
@interface NviSignalProvidersController : NSObject {
    <NviAssetsProvider> * _assetsProvider;
    NSHashTable * _currActiveDataSourceTypes;
    NSHashTable * _currActiveSigProvTypes;
    NSDictionary * _dataSrcMap;
    NSMapTable * _sigProvidersMap;
}

@property (nonatomic, retain) <NviAssetsProvider> *assetsProvider;
@property (nonatomic, retain) NSHashTable *currActiveDataSourceTypes;
@property (nonatomic, retain) NSHashTable *currActiveSigProvTypes;
@property (nonatomic, retain) NSDictionary *dataSrcMap;
@property (nonatomic, retain) NSMapTable *sigProvidersMap;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_iterateSignalMask:(unsigned long long)arg1 withHandler:(id /* block */)arg2;
- (bool)_setupSignalProviders:(id)arg1;
- (void)_startDataSourcesWithContext:(id)arg1;
- (void)_startSignalProvidersWithContext:(id)arg1;
- (void)_stopCurrentlyRunningSignalProviders;
- (void)_stopDataSources;
- (id)assetsProvider;
- (id)currActiveDataSourceTypes;
- (id)currActiveSigProvTypes;
- (id)dataSrcMap;
- (void)dealloc;
- (id)initWithAssetsProvider:(id)arg1 dataSourceMap:(id)arg2 signalProviderToDataSourceMap:(id)arg3;
- (void)registerSignalProviderDelegate:(id)arg1 forSignalTypes:(unsigned long long)arg2;
- (void)registerSignalProviderDelegateForAllSignalTypes:(id)arg1;
- (void)reset;
- (void)setAssetsProvider:(id)arg1;
- (void)setCurrActiveDataSourceTypes:(id)arg1;
- (void)setCurrActiveSigProvTypes:(id)arg1;
- (void)setDataSrcMap:(id)arg1;
- (void)setSigProvidersMap:(id)arg1;
- (id)sigProvidersMap;
- (void)startWithNviContext:(id)arg1;
- (void)stop;
- (void)unregisterSignalProviderDelegate:(id)arg1 forSignalType:(unsigned long long)arg2;
- (void)unregisterSignalProviderDelegateForAllSignalTypes:(id)arg1;

@end
