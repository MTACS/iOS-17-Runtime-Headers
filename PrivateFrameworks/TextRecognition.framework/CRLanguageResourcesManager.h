
@interface CRLanguageResourcesManager : NSObject {
    NSMutableDictionary * _languageResourceStacks;
    long long  _resourceType;
}

@property (retain) NSMutableDictionary *languageResourceStacks;
@property long long resourceType;

+ (id)lineWrappingManager;
+ (id)postProcessManager;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addSubscriber:(id)arg1 forLocale:(id)arg2;
- (id)initWithType:(long long)arg1;
- (id)languageResourceStacks;
- (bool)lockResourcesForLocale:(id)arg1 sender:(id)arg2 block:(id /* block */)arg3;
- (void)removeSubscriber:(id)arg1 forLocale:(id)arg2;
- (long long)resourceType;
- (void)setLanguageResourceStacks:(id)arg1;
- (void)setResourceType:(long long)arg1;
- (void)subscriber:(id)arg1 willDeactivateForLocale:(id)arg2;

@end
