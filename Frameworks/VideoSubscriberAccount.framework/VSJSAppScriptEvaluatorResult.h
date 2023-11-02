
@interface VSJSAppScriptEvaluatorResult : NSObject {
    NSError * _loadError;
    bool  _loaded;
    NSString * _url;
}

@property (nonatomic, retain) NSError *loadError;
@property (nonatomic) bool loaded;
@property (nonatomic, retain) NSString *url;

- (void).cxx_destruct;
- (id)loadError;
- (bool)loaded;
- (void)setLoadError:(id)arg1;
- (void)setLoaded:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
