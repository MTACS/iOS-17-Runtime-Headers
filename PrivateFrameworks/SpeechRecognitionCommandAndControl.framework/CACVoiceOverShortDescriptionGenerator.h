
@interface CACVoiceOverShortDescriptionGenerator : NSObject

+ (id)sharedInstance;

- (void)_addToItemShortDescriptionPairs:(id)arg1 foritems:(id)arg2 keyGenerationBlocks:(id)arg3 shortDescriptionGenerationBlocks:(id)arg4 lastResortShortDescriptionGenerationBlock:(id /* block */)arg5;
- (id)_items:(id)arg1 byKeyGeneratedUsingBlock:(id /* block */)arg2;
- (id)_lowerPitchForString:(id)arg1;
- (id)shortDescriptionsForItems:(id)arg1 style:(long long)arg2;

@end
