
@interface _PFPersistentHistoryFetchModel : NSObject <_PFAncillaryModelFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityCount;
+ (unsigned long long)ancillaryEntityOffset;
+ (id)ancillaryModelNamespace;
+ (void)initialize;

@end
