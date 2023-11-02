
@interface PPMapsSupport : NSObject

+ (bool)harvestMapItem:(id)arg1 documentIdentifier:(id)arg2 groupIdentifier:(id)arg3 includingPostalAddress:(bool)arg4 localNamedEntityStore:(id)arg5 localLocationStore:(id)arg6 error:(id*)arg7;
+ (void)importMapsDataWithCollectionQuery:(id)arg1 localNamedEntityStore:(id)arg2 localLocationStore:(id)arg3 shouldContinueBlock:(id /* block */)arg4;
+ (void)importMapsDataWithFavoriteQuery:(id)arg1 localNamedEntityStore:(id)arg2 localLocationStore:(id)arg3 shouldContinueBlock:(id /* block */)arg4;
+ (void)importMapsDataWithShouldContinueBlock:(id /* block */)arg1;

@end
