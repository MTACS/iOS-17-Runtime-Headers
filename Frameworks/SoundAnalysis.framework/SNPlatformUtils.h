
@interface SNPlatformUtils : NSObject

+ (id)acousticIDForLocalHost;
+ (id)tuningPathForTuningPrefix:(id)arg1 error:(id*)arg2;
+ (id)tuningPrefixForLocalHost;
+ (id)tuningPrefixForProductType:(int)arg1 acousticID:(id)arg2;

- (void).cxx_destruct;
- (id)init;

@end
