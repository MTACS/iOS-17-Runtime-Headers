
@interface TVTemplateFeaturesManager : NSObject {
    NSMutableDictionary * _contextsByFeature;
    <TVTemplateFeaturesManagerDelegate> * _delegate;
}

@property (nonatomic) <TVTemplateFeaturesManagerDelegate> *delegate;

+ (id)featuresManagerForAppDocument:(id)arg1;

- (void).cxx_destruct;
- (id)_contextsForFeature:(id)arg1;
- (long long)_rankForContext:(id)arg1;
- (id)currentContextForFeature:(id)arg1;
- (id)delegate;
- (void)popContext:(id)arg1 forFeature:(id)arg2;
- (void)pushContext:(id)arg1 forFeature:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
