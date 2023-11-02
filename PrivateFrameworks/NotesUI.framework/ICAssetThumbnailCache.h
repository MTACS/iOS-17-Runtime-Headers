
@interface ICAssetThumbnailCache : NSObject <ICThumbnailCaching>

+ (id)currentVersionDate;
+ (id)shared;

- (void).cxx_destruct;
- (id)creationDateFor:(id)arg1;
- (id)init;
- (void)invalidateForObjectIdentifiers:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
