
@interface _EARLmBuilder : NSObject

+ (id)buildLmWithConfig:(id)arg1 root:(id)arg2 data:(id)arg3 dir:(id)arg4 shouldStop:(id /* block */)arg5;
+ (id)generateNgramCountsWithConfig:(id)arg1 root:(id)arg2 data:(id)arg3;
+ (id)loadLmFromDir:(id)arg1;
+ (void)removeLmDir:(id)arg1;

@end
