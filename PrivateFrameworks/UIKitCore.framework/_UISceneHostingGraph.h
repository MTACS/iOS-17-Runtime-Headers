
@interface _UISceneHostingGraph : NSObject <UISceneHostingGraph> {
    NSMutableDictionary * _hostingGraph;
    NSHashTable * _lazy_contextTrackingAssertions;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)_localWindowGraphHostingContextID:(unsigned int)arg1;
- (void)_noteContextID:(unsigned int)arg1 hostedByWindow:(id)arg2;
- (id)localWindowGraphHostingContextID:(unsigned int)arg1;
- (id)observeLocalWindowGraphHostingContextID:(unsigned int)arg1 withHandler:(id /* block */)arg2;

@end
