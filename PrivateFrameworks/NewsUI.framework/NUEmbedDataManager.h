
@interface NUEmbedDataManager : NSObject <NUEmbedDataManager> {
    SXJSONDictionary * _embedConfiguration;
    <NUEmbedConfigurationLoader> * _embedConfigurationLoader;
    bool  _hasLoaded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SXJSONDictionary *embedConfiguration;
@property (nonatomic, readonly) <NUEmbedConfigurationLoader> *embedConfigurationLoader;
@property (nonatomic, readonly) bool hasLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)embedConfiguration;
- (id)embedConfigurationLoader;
- (id)embedForType:(id)arg1;
- (bool)hasLoaded;
- (id)initWithEmbedConfigurationLoader:(id)arg1;
- (void)loadEmbedDataWithCompletion:(id /* block */)arg1;
- (void)setEmbedConfiguration:(id)arg1;

@end
