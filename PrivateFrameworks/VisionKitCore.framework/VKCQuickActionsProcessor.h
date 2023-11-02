
@interface VKCQuickActionsProcessor : NSObject

+ (id)configureQuickActionForTuple:(id)arg1 unfilteredTextElements:(id)arg2;
+ (id)dedupeQuickActions:(id)arg1;
+ (void)quickActionsFromElements:(id)arg1 unfilteredElements:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (long long)sortOrderForElement:(id)arg1;
+ (id)sortQuickActions:(id)arg1;

@end
