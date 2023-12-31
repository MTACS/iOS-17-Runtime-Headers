
@interface CKTranscriptPluginViewManager : NSObject {
    NSMutableDictionary * _pluginViewToReuseDelegateMap;
    IMMultiDict * _reusablePluginViewsByClassName;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_objectSupportsPluginViewReuse:(id)arg1;
- (id)_pointerKeyForPluginView:(id)arg1;
- (void)_registerPluginView:(id)arg1 withReuseDelegate:(id)arg2;
- (void)dealloc;
- (id)dequeuePluginViewForBalloonController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)enqueuePluginViewForReuse:(id)arg1;
- (id)init;
- (void)resetState;

@end
