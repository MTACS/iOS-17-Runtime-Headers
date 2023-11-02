
@interface UIKBGraphCache : NSObject <_UIScreenBasedObject> {
    NSMutableDictionary * _graphCache;
    UIScreen * _screen;
}

@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *graphCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)graphCacheForScreen:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_intendedScreen;
- (bool)_matchingOptions:(id)arg1;
- (id)_options;
- (id)graphCache;

@end
