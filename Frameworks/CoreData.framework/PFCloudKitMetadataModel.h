
@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityCount;
+ (unsigned long long)ancillaryEntityOffset;
+ (id)ancillaryModelNamespace;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)arg1;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)arg1 fromStore:(id)arg2;
+ (void)initialize;

@end
