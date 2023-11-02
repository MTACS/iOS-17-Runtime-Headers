
@interface ICNAReferringInboundURLFilter : NSObject

+ (id)allowedTieredPrefixReplacements;
+ (id)filterReferringInboundURL:(id)arg1;
+ (id)filterStringByAllowedTieredPrefixReplacements:(id)arg1;
+ (id)filterURLByLogicalReplacements:(id)arg1;
+ (bool)foundMatchingPrefixAmongCandidates:(id)arg1 forInputString:(id)arg2 matchingPrefixInplaceResult:(id*)arg3;

@end
